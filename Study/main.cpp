#include <iostream>

// 4153번 직각삼각형
void swap(int& a, int& b)
{
	int t = a; a = b; b = t;
}

int main()
{
	int a, b, c;
	while (true)
	{
		std::cin >> a >> b >> c;
		if (!a && !b && !c) break;
		if (c < a) swap(c, a);
		if (c < b) swap(c, b);
		std::cout << (a * a + b * b == c * c ? "right" : "wrong") << '\n';
	}
}