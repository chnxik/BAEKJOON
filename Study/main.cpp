#include <iostream>

// 1085�� ���簢������ Ż��

int main()
{
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;
	x = x > w / 2 ? w - x : x;
	y = y > h / 2 ? h - y : y;
	std::cout << (x > y ? y : x);
}