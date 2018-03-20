#include <windows.h>
#include <iostream>
#include "./../Project1/PrintLastError.cpp"

int main()
{
	setlocale(LC_ALL, "Russian");
	int result = 0;
	HANDLE hTest2;
	while (CreatePen(PS_SOLID, 1, RGB(1, 1, 1)))
	{
		result++;
	}
	std::cout << result << std::endl;

	PrintLastError();
	return 0;
}