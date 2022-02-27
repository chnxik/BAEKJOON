#include <iostream>
#include <cstring>

// 10809번 알파벳 찾기

int main()
{
	char S[101];
	std::cin >> S;
	int alphabet[26], tmp;
	memset(alphabet, -1, sizeof(int) * 26);
	
	for (int i = 0; S[i] != 0; ++i)
	{
		tmp = (int)S[i] - 97;
		if (-1 == alphabet[tmp]) alphabet[tmp] = i;
	}
	
	for (int i = 0; i < 26; ++i)
	{
		if (i) std::cout << " ";
		std::cout << alphabet[i];
	}
}