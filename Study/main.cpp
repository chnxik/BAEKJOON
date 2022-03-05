#include <iostream>

// 1436번 영화감동 숌

bool MovieName(int n)
{
	while (n > 100)
	{
		if (n % 1000 == 666) return true;
		n /= 10;
	}
	return false;
}

int main()
{
	int series = 0, N, cnt = 665;
	std::cin >> N;
	while (series != N)
	{
		if (MovieName(++cnt)) ++series;
	}
	std::cout << cnt;
}