#include <iostream>

// 2231번 분해합

int make_num(int i)
{
	int tmp = i;
	while (tmp)
	{
		i += tmp % 10;
		tmp /= 10;
	}
	return i;
}

int main()
{
	int N,i;
	std::cin >> N;
	for (i = 1; i < N; ++i)	if (make_num(i) == N) break;
	std::cout << (make_num(i) == N ? i : 0);
}