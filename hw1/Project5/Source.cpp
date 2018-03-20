#include <iostream>

void recursion3(int count, int temp, int temp2)
{
	std::cout << count << " " << temp << " " << temp2 << std::endl;
	recursion3(count + 1, temp + 1, temp2 + 1);
}

void recursion2(int count, int temp)
{
	std::cout << count << " " << temp << std::endl;
	recursion2(count + 1, temp + 1);
}

void recursion1(int count)
{
	std::cout << count << std::endl;
	recursion1(count + 1);
}

void recursion()
{
	recursion();
}

int main()
{
	// 4885 �� 1
	recursion();
	// 24176 ��� �� 5 // 4758 ��� �� 1
	//recursion1(1);
	// 23742 ��� �� 5
	//recursion2(1, 1);
	// 22901 ��� �� 5
	//recursion3(1, 1, 1);
	return 0;
}

/*
524288 = a + 2412 b
1048576 = a + 4885 b
1048576 = a + 4758(b + c)
5242800 = a + 23742(b + 2c)
a = 12,64 �����
b = 212 ���� 
c = 4 ���� (���)

*/