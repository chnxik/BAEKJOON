#include <iostream>
#include <cmath>

// 2581¹ø ¼Ò¼ö

int main()
{
	int M, N, root, sum = 0, min = 0;
	bool dec;
	std::cin >> M >> N;
	root = (int)sqrt(N);
	for (int i = M; i <= N; ++i)
	{
		dec = i == 1 ? false : true;
		for (int j = 2; j <= root; ++j)
		{
			if (i == j || i == 1) break;
			if (i % j == 0)
			{
				dec = false;
				break;
			}
		}
		if (dec)
		{
			if (!min) min = i;
			sum += i;
		}
	}
	if (sum) std::cout << sum << '\n' << min;
	else std::cout << -1;
}