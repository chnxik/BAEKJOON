#include <iostream>
#define SIZE 246913

// 4948번 베르트랑 공준

int decArr[SIZE] = {0,0};

void SetArr(int Arr[], int size)
{
	int i = 2;
	while (i < size) Arr[i++] = i;
}

void SetDec(int Arr[], int size)
{
	for (int i = 2; i * i < size; ++i)
		if (Arr[i])
			for (int j = 2; i*j <= size; ++j)
				Arr[i*j] = 0;
}

int main()
{
	SetArr(decArr, SIZE);
	SetDec(decArr, SIZE);
	int n,cnt,dn;
	while (true)
	{
		std::cin >> n;
		if (!n) break;
		cnt = 0;
		dn = n * 2;
		while (++n <= dn) if (decArr[n]) ++cnt;
		std::cout << cnt << '\n';
	}
}