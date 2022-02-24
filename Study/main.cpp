#include <iostream>

// 8393Йј Че

int main()
{
	int N, res = 0;
	std::cin >> N;
	for (int i = 1; i <= N; ++i) res += i;
	std::cout << res;
}