#include <iostream>

// 1712�� ���ͺб���

int main()
{
	int A, B, C;
	std::cin >> A >> B >> C;
	std::cout << (B < C ? (A / (C - B)) + 1 : -1);
}