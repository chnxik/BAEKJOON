#include <iostream>

// 8958¹ø OXÄûÁî

using std::cin;

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);

	int N,cnt,score;
	char OX[80];
	char* cp;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> OX;
		cnt = 0;
		score = 0;
		cp = OX;
		while (*cp)
		{
			if (*cp == 'O')
			{
				++cnt;
				score += cnt;
			}
			else if (*cp == 'X') cnt = 0;
			++cp;
		}
		std::cout << score << '\n';
	}
}