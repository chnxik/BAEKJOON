#include <iostream>

// 2751번 수 정렬하기 2

void Merge(int* Arr,int* tmp, int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;
	while (i <= mid && j <= right)
	{
		if (Arr[i] <= Arr[j]) tmp[k++] = Arr[i++];
		else tmp[k++] = Arr[j++];
	}
	if (i > mid) while (j <= right) tmp[k++] = Arr[j++];
	else while (i <= mid) tmp[k++] = Arr[i++];
	for (int i = left; i <= right; ++i) Arr[i] = tmp[i];
}

void MergeSort(int* Arr, int* tmp, int left, int right)
{
	int mid;
	if (left < right)
	{
		mid = (left + right) / 2;
		MergeSort(Arr, tmp, left, mid);
		MergeSort(Arr, tmp, mid + 1, right);
		Merge(Arr, tmp, left, mid, right);
	}
}

int main()
{
	int N, * Arr, * tmpArr;
	std::cin >> N;
	Arr = new int[N];
	tmpArr = new int[N];
	for (int i = 0; i < N; ++i) std::cin >> Arr[i];
	MergeSort(Arr, tmpArr, 0, N-1);
	for (int i = 0; i < N; ++i) std::cout << Arr[i] << '\n';
	delete[] Arr,tmpArr;
}
