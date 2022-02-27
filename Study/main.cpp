#include <iostream>

// 11720번 숫자의 합

using std::cin;

int main()
{
	short N, res = 0;
	char n;
	cin >> N;
	while (N--)
	{
		cin >> n;
		res += (short)n - 48;
	}
	std::cout << res;
}