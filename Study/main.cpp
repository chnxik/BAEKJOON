#include <iostream>

// 11021¹ø A+B - 7

int main()
{
	int N,A,B;
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	std::cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		std::cin >> A >> B;
		std::cout << "Case #"<< i <<": " << A+B << '\n';
	}
}