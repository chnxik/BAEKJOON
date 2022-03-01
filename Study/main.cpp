#include <iostream>

// 1929번 소수 구하기

int decArr[1000001] = { 0, };

int main()
{
	std::cout.sync_with_stdio(false);
	for (int i = 2; i < 1000001; ++i) decArr[i] = i;
	for (int i = 2; i <= 1000; ++i)
	{
		if (decArr[i])
		{
			for (int j = i + 1; j < 1000001; ++j)
			{
				if (decArr[j] && decArr[j] % i == 0) decArr[j] = 0;
			}
		}
	}
	int M, N;
	std::cin >> M >> N;
	for (int i = M; i <= N; i++) if (decArr[i]) std::cout << decArr[i] << '\n';

}