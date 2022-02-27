#include <iostream>
#include <string>

// 1152번 단어의 개수
std::string str;

int main()
{
	bool check = true;
	int cnt = 0;
	std::getline(std::cin, str);
	std::string::iterator _iter = str.begin();
	while (_iter != str.end())
	{
		if (check && *_iter != ' ')
		{
			check = false;
			++cnt;
		}
		if (!check && *_iter == ' ') check = true;
		++_iter;
	}
	std::cout << cnt;
}