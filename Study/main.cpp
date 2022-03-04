#include <iostream>

// 10872¹ø ÆÑÅä¸®¾ó

int factorial(int n)
{
	if (!n) return 1;
	return factorial(n - 1) * n;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << factorial(n);
}