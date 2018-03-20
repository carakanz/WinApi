#include <windows.h>
#include <iostream>
#include "./../Project1/PrintLastError.cpp"

int main()
{
	setlocale(LC_ALL, "Russian");
	while (VirtualAlloc(NULL, rand() + 1, MEM_COMMIT,
		(rand() % 2) ? PAGE_READWRITE | PAGE_GUARD : PAGE_READWRITE));

	PrintLastError();
	return 0;
}