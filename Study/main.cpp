#include <iostream>

// 2798¹ø ºí·¢Àè

int blackjack(int i, int j, int k, int* arr)
{
	return arr[i] + arr[j] + arr[k];
}

int main()
{
	int N, M, res = 0;
	std::cin >> N >> M;
	int* card = new int[N];
	for (int i = 0; i < N; ++i) std::cin >> card[i];
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				if (blackjack(i, j, k, card) <= M && res < blackjack(i, j, k, card)) res = blackjack(i, j, k, card);
			}
		}
	}
	std::cout << res;

	delete[] card;
}