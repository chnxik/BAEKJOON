#include <iostream>

// 2839�� ���� ���

int main()
{
	int N;
	std::cin >> N;
	if (N == 4 || N == 7) std::cout << -1;
	else std::cout << N/5 + ((N%5) ? (N % 5) % 2 ? 1 : 2 : 0);
}