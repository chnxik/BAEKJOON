#include <iostream>

// 2908�� ���

void reverse(int &n)
{
	n = n / 100 + (n % 100) / 10 * 10 + (n % 10) * 100;
}

int main()
{
	int A, B;
	std::cin >> A >> B;
	reverse(A);
	reverse(B);
	std::cout << (A > B ? A : B);
}