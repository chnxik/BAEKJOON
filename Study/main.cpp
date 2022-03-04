#include <iostream>

// 2447번 별 찍기 - 10

// 순서
// 1. 가로 세로, (n+1) * n개의 배열을 공백으로 초기화시킨다. *가로열 마지막글자는 null값을 준다.
// 2. n개의 배열을 3으로 나누어 5번째 칸을 제외한 모든 칸에 재귀함수를 호출한다.
// 3. n이 3까지 나누어지면 해당 좌표에 '*'문자를 대입하는 함수를 출력한다.
// 4. 모든 배열에 '*'문자가 대입되면 가로배열을 문장으로 한줄씩 출력한다.

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