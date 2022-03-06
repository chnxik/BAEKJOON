#include <iostream>

// 2750번 수 정렬하기

void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Sort(int* Arr, int N)
{
	for (int i = 1; i < N; ++i)
	{
		for (int j = 1; j < N; ++j)
		{
			if (Arr[j - 1] > Arr[j]) Swap(Arr[j - 1], Arr[j]);
		}
	}
}

int main()
{
	int N, * Arr;
	std::cin >> N;
	Arr = new int[N];
	for (int i = 0; i < N; ++i)std::cin >> Arr[i];
	Sort(Arr, N);
	for (int i = 0; i < N; ++i) std::cout << Arr[i] << '\n';
}
