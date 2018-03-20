#include "CHeapManager.h"

CHeapManager::CHeapManager()
{
	SYSTEM_INFO siSysInfo;
	GetSystemInfo(&siSysInfo);
	dwPageSize = siSysInfo.dwPageSize;
}


CHeapManager::~CHeapManager()
{
}

LPVOID CHeapManager::Create(int minSize, int maxSize)
{
	LPVOID startMemory = VirtualAlloc(NULL, alignToPageSize(maxSize), MEM_RESERVE, PAGE_READWRITE);
	if (startMemory == NULL)
	{
		return NULL;
	}
	return VirtualAlloc(startMemory, alignToPageSize(minSize), MEM_COMMIT, PAGE_READWRITE);
}

DWORD CHeapManager::alignToPageSize(DWORD size)
{
	return ((size - 1) / dwPageSize + 1) * dwPageSize;
}
