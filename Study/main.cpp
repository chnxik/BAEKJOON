#include <iostream>

// 10818번 최소, 최대

using std::cin;

int main()
{
	std::cout.sync_with_stdio(false);
	std::cin.tie(NULL);
	int N, max = 0, cnt;
	for (int i = 1; i < 10; ++i)
	{
		cin >> N;
		if (max < N)
		{
			max = N;
			cnt = i;
		}
	}
	std::cout << max << '\n' << cnt;
}