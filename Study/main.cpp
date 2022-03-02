#include <iostream>

// 1085번 직사각형에서 탈출

int main()
{
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;
	x = x > w / 2 ? w - x : x;
	y = y > h / 2 ? h - y : y;
	std::cout << (x > y ? y : x);
}