#include <iostream>

// 5622번 다이얼

int TransAlp(char* a,int dial[])
{
	return dial[*a - 65];
}

int main()
{
	char word[16];
	char* pw = word;
	int dial[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 }, sec = 0;
	std::cin >> word;
	while (*pw)
	{
		sec += TransAlp(pw,dial);
		pw++;
	}
	std::cout << sec;
}