#include <iostream>

// 2869�� �����̴� �ö󰡰� �ʹ�

int main()
{
	int A, B, V, a, b;
	std::cin >> A >> B >> V;
	a = V - A;
	b = A - B;
	std::cout << ((a % b) == 0 ? a / b + 1 : a / b + 2);
}