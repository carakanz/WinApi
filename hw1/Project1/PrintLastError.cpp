#pragma once
#include <iostream>
#include <WinError.h>
#include <windows.h>

void PrintLastError()
{
	DWORD lastError = GetLastError();
	std::wcout << "Last error: " << lastError << "\n";
	LPTSTR errorText = NULL;
	BOOL isError = FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_ALLOCATE_BUFFER |
		FORMAT_MESSAGE_IGNORE_INSERTS,
		0,
		lastError,
		0,
		(LPTSTR)&errorText,
		0,
		0);
	if (isError)
	{
		std::wcout << "Text: " << errorText << std::endl;
	}
	else
	{
		lastError = GetLastError();
		std::cout << "Last error: " << lastError << "\n";
	}
}