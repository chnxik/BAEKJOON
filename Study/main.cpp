#include <iostream>

// 3009�� �� ��° ��

int main()
{
	int x[3], y[3];
	for (int i = 0; i < 3; ++i) std::cin >> x[i] >> y[i];
	std::cout << (x[0] == x[1] ? x[2] : x[0] == x[2] ? x[1] : x[0]) << ' ';
	std::cout << (y[0] == y[1] ? y[2] : y[0] == y[2] ? y[1] : y[0]);
}