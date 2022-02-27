#include <iostream>

// 2675번 문자열 반복

using std::cin;
using std::cout;

int main()
{
	int T, R;
	char S[21];
	char* ps;
	cin >> T;
	while (T--)
	{
		cin >> R >> S;
		ps = S;
		while (*ps)
		{
			for (int i = 0; i < R; ++i) cout << *ps;
			++ps;
		}
		cout << '\n';
	}
}