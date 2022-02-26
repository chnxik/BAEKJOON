#include <iostream>

// 4673¹ø ¼¿ÇÁ ³Ñ¹ö

int d(int n)
{
	int res = n;
	while (n)
	{
		res += n % 10;
		n /= 10;
	}
	return res;
}

int arr[10001] = { 0, };

int main()
{
	
	for (int i = 1; i < 10001; ++i)
	{
		if (!arr[d(i)]) arr[d(i)] = 1;
		if (!arr[i]) std::cout << i << '\n';
	}
}