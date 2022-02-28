#include <iostream>

// 1978번 소수 찾기

using std::cin;

int main()
{
	int N, num, cnt = 0;
	bool dec;
	cin >> N;

	while (N--)
	{
		cin >> num;
		dec = true;
		for (int i = 2; i <= 32; ++i)
		{
			if (num == i) break;
			if (0 == num % i || 1 == num)
			{
				dec = false;
				break;
			}
		}
		if (dec) ++cnt;
	}
	std::cout << cnt;
}