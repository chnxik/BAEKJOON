#include <iostream>

// 2447�� �� ��� - 10

// ����
// 1. ���� ����, (n+1) * n���� �迭�� �������� �ʱ�ȭ��Ų��. *���ο� ���������ڴ� null���� �ش�.
// 2. n���� �迭�� 3���� ������ 5��° ĭ�� ������ ��� ĭ�� ����Լ��� ȣ���Ѵ�.
// 3. n�� 3���� ���������� �ش� ��ǥ�� '*'���ڸ� �����ϴ� �Լ��� ����Ѵ�.
// 4. ��� �迭�� '*'���ڰ� ���ԵǸ� ���ι迭�� �������� ���پ� ����Ѵ�.

void printstar(int x, int y, char** Arr)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (i == 1 && j == 1);
			else Arr[i + y][j + x] = '*';
		}
	}
}

void SetStar(int x, int y, int n, char** Arr)
{
	if (n == 3) printstar(x, y, Arr);
	else
	{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (i == 1 && j == 1);
				else SetStar(x + n * j / 3, y + n * i / 3, n / 3, Arr);
			}
		}
	}
}

int main()
{
	int n;
	std::cin >> n;
	
	char** StarArr = new char* [n];
	for (int i = 0; i < n; ++i)
	{
		StarArr[i] = new char[n + 1];
		std::fill_n(StarArr[i], n, ' ');
		StarArr[i][n] = 0;
	}

	SetStar(0, 0, n, StarArr);
	for (int i = 0; i < n; ++i) std::cout << StarArr[i] << '\n';
	
	for (int i = 0; i < n; ++i) delete[] StarArr[i];
	delete[] StarArr;
}