#pragma once
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include "CHeapManager.h"
#include "PrintLastError.cpp"

int wmain()
{
	int size = 2 * 64 * 1024;
	setlocale(LC_ALL, "Russian");
	CHeapManager heapManager;
	//LPVOID size = heapManager.Create(2, 100000);
	LPVOID size1 = VirtualAlloc(NULL, 16000 * 64 * 1024, MEM_COMMIT, PAGE_READWRITE);
	LPVOID size2 = VirtualAlloc(size1, 1024, MEM_COMMIT, PAGE_READWRITE);
	LPVOID size3 = VirtualAlloc(size1, 1024, MEM_COMMIT, PAGE_READWRITE);
	LPVOID size4 = VirtualAlloc(size1, 1024, MEM_COMMIT, PAGE_READWRITE);
	LPVOID size5 = VirtualAlloc(size1, 1024, MEM_COMMIT, PAGE_READWRITE);
	LPVOID size6 = VirtualAlloc(size1, 1024, MEM_COMMIT, PAGE_READWRITE);
	LPVOID size7 = VirtualAlloc(size1, 1024, MEM_COMMIT, PAGE_READWRITE);
	Sleep(100000000);
	return 0;
}