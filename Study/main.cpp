#include <iostream>

// 11653�� ���μ�����

int main()
{
	int N, div = 2;
	std::cin >> N;
	if (1 == N) return 0;
	while (1 != N)
	{
		if (!(N % div)) N /= div;
		else {
			++div;
			continue;
		}
		std::cout << div << '\n';
	}
}