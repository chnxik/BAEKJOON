#include <iostream>

// 2838¹ø º° Âï±â - 1
using std::cout;

int main()
{
	int N;
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	std::cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		for (int j = 0; j < i; ++j) cout << '*';
		cout << '\n';
	}
}