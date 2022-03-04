#include <iostream>

// 10870번 피보나치 수 5

int F(int n)
{
	if (!n) return 0;
	else if (n < 3) return 1;
	return F(n - 1) + F(n - 2);
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << F(n);
}