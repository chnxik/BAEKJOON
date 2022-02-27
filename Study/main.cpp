#include <iostream>

// 1316번 그룹 단어 체커
using std::cin;

bool check_w(char* word)
{
	char* cp = word;
	bool check = false;
	do
	{
		if (check && *word == *cp) return false;
		else if (*word != *cp) check = true;
		++cp;
	} while (*cp);
	return true;
}

int main()
{
	int N;
	char word[101];
	char* wp = word;
	cin >> N;
	int cnt = N;
	while (N--)
	{
		cin >> word;
		wp = word;
		while (*wp)
		{
			if (!check_w(wp))
			{
				--cnt;
				break;
			}
			++wp;
		}
	}
	std::cout << cnt;
}