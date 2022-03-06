#include <iostream>

// 2108번 통계학

using std::cout;

int Base[8001] = { 0, };

enum many
{
	cnt,
	idx1,
	idx2,
	end
};

void fn_Many(int Base[], int arr[], int n)
{
	if (Base[n + 4000] > arr[cnt])
	{
		arr[cnt] = Base[n + 4000];
		arr[idx1] = n;
		arr[idx2] = n;
	}
	else if (Base[n + 4000] == arr[cnt])
	{
		if (n < arr[idx1])
		{
			arr[idx2] = arr[idx1];
			arr[idx1] = n;
		}
		else if (arr[idx2] == arr[idx1] || arr[idx2] > n) arr[idx2] = n;
	}
}

int main()
{

	std::cout << std::fixed;
	std::cout.precision(0);

	int N, n, many[end] = { 0, }, max = -4000, min = 4000;
	double sumavg = 0;
	std::cin >> N;
	int* mid = new int[N], * pmid = mid;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> n;
		max = max < n ? n : max;
		min = min > n ? n : min;
		sumavg += n;
		++Base[n + 4000];
		fn_Many(Base, many, n);
	}

	for (int i = min; i <= max; ++i)
	{
		while (Base[i + 4000])
		{
			--Base[i + 4000];
			*(pmid++) = i;
		}
	}

	sumavg /= N;
	if (sumavg <0 && sumavg >-1) sumavg = 0;
	std::cout << sumavg << '\n';
	std::cout << mid[N / 2] << '\n';
	std::cout << many[idx2] << '\n';
	std::cout << max - min;

	delete[] mid;
}
