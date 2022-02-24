#include <iostream>

// 2439¹ø º° Âï±â - 2
using std::cout;

int main()
{
	int N;
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	std::cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		for (int j = 0; j < N - i; ++j) cout << ' ';
		for (int k = 0; k < i; ++k) cout << '*';
		cout << '\n';
	}
}