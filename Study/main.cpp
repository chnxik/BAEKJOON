#include <iostream>
#define SIZE 10001

// 9020번 골드바흐의 추측

int decArr[SIZE] = {0,0,2,};

void SetArr(int Arr[], int size)
{
	int i = 3;
	for (; i < size; i += 2) Arr[i] = i;
}

void SetDec(int Arr[], int size)
{
	for (int i = 2; i * i < size; ++i)
		if (Arr[i])
			for (int j = 2; i*j < size; ++j)
				Arr[i*j] = 0;
}

int main()
{
	SetArr(decArr, SIZE);
	SetDec(decArr, SIZE);
	int T, n, hn;
	std::cin >> T;
	while (T--)
	{
		std::cin >> n;
		hn = n / 2;
		while (decArr[hn] + decArr[n - hn] != n)
		{
			while(!decArr[--hn]);
		}
		std::cout << hn << ' ' << n - hn << '\n';
	}
}