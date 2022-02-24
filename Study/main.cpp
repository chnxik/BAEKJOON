#include <iostream>

// 10951¹ø A+B - 4

int main()
{
	int A, B;
	while (1)
	{
		std::cin >> A >> B;
		if (std::cin.eof() == true) break;
		std::cout << A + B << '\n';
	}
}