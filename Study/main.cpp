#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

// 3053�� �ý� ������

int main()
{
	double R;
	std::cin >> R;
	std::cout << std::fixed;
	std::cout.precision(6);
	std::cout << R * R * M_PI << '\n' << R * R * 2;

}