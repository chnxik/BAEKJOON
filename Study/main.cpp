#include <iostream>

// 2908�� ���

void reverse(int& n)
{
	int tmp = 0;
	do
	{
		tmp = tmp * 10 + n % 10;
		n /= 10;
	} while (n);
	n = tmp;
}

int main()
{
	int A, B;
	std::cin >> A >> B;
	reverse(A);
	reverse(B);
	std::cout << (A > B ? A : B);
}