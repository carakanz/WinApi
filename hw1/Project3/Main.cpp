#include <windows.h>
#include <iostream>
#include "./../Project1/PrintLastError.cpp"

int main()
{
	setlocale(LC_ALL, "Russian");
	HANDLE hTest = CreateEvent(NULL, TRUE, TRUE, NULL);
	int result = 1;
	HANDLE hTest2;
	while (DuplicateHandle(GetCurrentProcess(), hTest,
		GetCurrentProcess(), &hTest2, 0, false, DUPLICATE_SAME_ACCESS))
	{
		result++;
	}
	std::cout << result << std::endl;

	PrintLastError();
	return 0;
}