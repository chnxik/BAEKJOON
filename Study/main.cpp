#include <iostream>

// 1110�� ���ϱ� ����Ŭ

int main()
{
	short N,cnt = 0;
	std::cin >> N;
	short temp = N;
	do
	{
		N = (N % 10 * 10) + (N / 10 + N % 10) % 10;
		++cnt;
	} while (temp != N);
	std::cout << cnt;
}