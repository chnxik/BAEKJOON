#include <iostream>

// 2941번 크로아티아 알파벳

int main()
{
	char str[101];
	std::cin >> str;
	int cnt = 1;
	for (int i = 1; 0 != str[i]; ++i)
	{

		if (str[i] == '-' || str[i] == '=')
		{
			--cnt;
			if (1<i && (str[i - 1] == 'z' && str[i - 2] == 'd')) --cnt;
		}
		else if (0<i && str[i] == 'j')
		{
			if (str[i - 1] == 'l' || str[i - 1] == 'n') --cnt;
		}
		++cnt;
	}
	std::cout << cnt;
}