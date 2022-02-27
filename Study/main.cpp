#include <iostream>

// 1157번 단어 공부

int use_ch(char* ch)
{
	return 'Z' < *ch ? (int)*ch - 97 : (int)*ch - 65;
}

char max(int alp[])
{
	int max = 0, maxi = 0;
	bool dup = false;
	for (int i = 0; i < 26; ++i)
	{
		if (max < alp[i])
		{
			max = alp[i];
			maxi = i;
			dup = false;
		}
		else if (max == alp[i])
		{
			dup = true;
		}
	}
	return dup ? '?' : maxi + 65;
}

int main()
{
	char ch[1000001];
	int alphabet[26] = { 0, };
	std::cin >> ch;
	char* pc = ch;
	while (*pc)
	{
		++(alphabet[use_ch(pc++)]);
	}
	std::cout << max(alphabet);
}