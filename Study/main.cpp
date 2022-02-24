#include <iostream>

// 15552¹ø ºü¸¥ A+B

int main()
{
	int N,A,B;
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	std::cin >> N;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> A >> B;
		std::cout << A + B << '\n';
	}
}