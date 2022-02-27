#include <iostream>

// 1193번 분수찾기

int main()
{
	int x, i = 1;
	std::cin >> x;
	while (x > 0) x -= i++;
	int a = i + x - 1;
	int b = 1 - x;
	if (0 == i % 2) std::cout << b << '/' << a;
	else if (1 == i % 2) std::cout << a << '/' << b;
}