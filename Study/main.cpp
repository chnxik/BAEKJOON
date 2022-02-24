#include <iostream>

// 10818번 최소, 최대

using std::cin;

int main()
{
	std::cout.sync_with_stdio(false);
	std::cin.tie(NULL);
	int N, temp;
	cin >> N >> temp;
	int max = temp, min = temp;
	for (int i = 1; i < N; ++i)
	{
		cin >> temp;
		if (max < temp) max = temp;
		if (min > temp) min = temp;
	}
	std::cout << min << ' ' << max;
}