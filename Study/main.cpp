#include <iostream>

// 3052�� ������

int main()
{
	short cnt = 10 , remain[10] = { 0, };
	for (int i = 0; i < 10; ++i)
	{
		std::cin >> remain[i];
		remain[i] %= 42;
		for (int j = 0; j < i; ++j)
		{
			if (remain[i] == remain[j])
			{
				--cnt;
				break;
			}
		}
	}
	std::cout << cnt;
}