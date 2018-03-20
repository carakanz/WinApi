#pragma once
#include <windows.h>
#include <iostream>
#include "PrintLastError.cpp"

int main()
{
	setlocale(LC_ALL, "Russian");
	int result = 0;
	while (VirtualAlloc(NULL, 1024 * 1024, MEM_COMMIT, PAGE_NOACCESS))
	{
		result++;
		std::cout << result << "\n";
	}
	std::cout << std::endl;
	PrintLastError();
	return 0;
}