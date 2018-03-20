#pragma once
#include <windows.h>

class CHeapManager
{
public:
	CHeapManager();
	~CHeapManager();
	LPVOID Create(int minSize, int maxSize);
	//void* Alloc(int size);
	//void Free(void* mem);
	//void Destroy();
private:
	DWORD alignToPageSize(DWORD size);
	DWORD dwPageSize;
};

