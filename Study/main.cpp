#include <iostream>

// 1065¹ø ÇÑ¼ö

bool hansu(int n)
{
	short _n = n / 10;
	short temp = n % 10 - _n % 10;
	while (_n)
	{
		if (temp != n % 10 - _n % 10) return false;
		temp = n % 10 - _n % 10;
		n = _n;
		_n = n / 10;
	}
	return true;
}

int main()
{
	int N, cnt = 0;
	std::cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		if (hansu(i)) ++cnt;
	}
	std::cout << cnt;
}