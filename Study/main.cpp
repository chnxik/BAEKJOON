#include <iostream>

// 1427�� ��Ʈ �λ��̵�

int main()
{
	int N,num[10] = { 0, };
	std::cin >> N;
	while (N)
	{
		++num[N % 10];
		N /= 10;
	}
	for (int i = 9; i >= 0; --i) while (num[i]--) std::cout << i;
}