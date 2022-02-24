#include <iostream>

// 11022¹ø A+B - 8

int main()
{
	int N,A,B;
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	std::cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		std::cin >> A >> B;
		std::cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << '\n';
	}
}