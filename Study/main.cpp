#include <iostream>

// 11650번 좌표 정렬하기

class loc
{
private:
	int x;
	int y;

public:
	void insert()
	{
		std::cin >> x >> y;
	}
	void printloc(void)
	{
		std::cout << x << ' ' << y << '\n';
	}

	bool operator > (loc _other)
	{
		bool res;
		if (x == _other.x) res = y > _other.y ? true : false;
		else res = x > _other.x ? true : false;
		return res;
	}
};

void _mergesort(loc* arr,loc* temp, int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left;
	while (i <= mid && j <= right)
	{
		if (arr[i] > arr[j]) temp[k++] = arr[j++];
		else temp[k++] = arr[i++];
	}
	if (i > mid) while (j <= right) temp[k++] = arr[j++];
	else while (i <= mid) temp[k++] = arr[i++];

	for (int i = left; i <= right; ++i) arr[i] = temp[i];
}

void _merge(loc* arr, loc* temp, int left, int right)
{
	if(left < right)
	{
		int mid = (left + right) / 2;
		_merge(arr, temp, left, mid);
		_merge(arr, temp, mid + 1, right);
		_mergesort(arr, temp, left, mid, right);
	}
}



int main()
{
	int N;
	std::cin >> N;
	
	loc* arr = new loc[N], * temp = new loc[N];
	for (int i = 0; i < N; ++i) arr[i].insert();
	_merge(arr, temp, 0, N-1);

	for (int i = 0; i < N; ++i) arr[i].printloc();

	delete[] arr,temp;
}