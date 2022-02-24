#include <iostream>

// 2742¹ø  ±âÂï N

int main()
{
	int N;
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	std::cin >> N;
	for (int i = N; i > 0; --i) std::cout << i << '\n';
}