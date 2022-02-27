#include <iostream>

// 2869번 달팽이는 올라가고 싶다

int main()
{
	int A, B, V, a, b;
	std::cin >> A >> B >> V;
	a = V - A;
	b = A - B;
	std::cout << ((a % b) == 0 ? a / b + 1 : a / b + 2);
}