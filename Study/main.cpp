#include <iostream>

// 2292¹ø ¹úÁý

int beezip(int n)
{
	int x=1,i=0;
	do
	{
		x += i++ * 6;
	} while (n > x);
	return i;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << beezip(n);
}