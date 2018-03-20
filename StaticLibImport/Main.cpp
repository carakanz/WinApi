#include <PalindromeCounter.h>
#include <iostream>
#include <Windows.h>
#include <cassert>
#include <string>

int wmain(int argc, wchar_t *argv[])
{
	assert(argc == 2);
	LARGE_INTEGER size;
	HANDLE hFile = CreateFileW(argv[1], GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	assert(hFile != INVALID_HANDLE_VALUE);
	GetFileSizeEx(hFile, &size);
	wchar_t* text = new wchar_t[size.LowPart + 1];
	DWORD len = 0;
	ReadFile(hFile, text, size.LowPart + 1, &len, 0);
	text[size.LowPart / 2] = 0;
	int countPalindrome = PalindromeCounter(text);
	MessageBox(NULL, std::to_wstring(countPalindrome).c_str(), L"Count palindrome", MB_OK);
	return 0;
}