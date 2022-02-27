#include <iostream>

// 1712번 손익분기점

int main()
{
	int A, B, C;
	std::cin >> A >> B >> C;
	std::cout << (B < C ? (A / (C - B)) + 1 : -1);
}