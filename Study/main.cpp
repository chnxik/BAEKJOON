#include <iostream>

// 1018번 체스판 다시 칠하기

int check(int x, int y, char** arr)
{
	int endx = x + 8, endy = y + 8, case1 = 0, case2 = 0;
	for (int i = y; i < endy; ++i)
	{
		for (int j = x; j < endx; ++j)
		{
			if (i % 2)
			{
				if (j % 2) arr[i][j] == 'B' ? ++case1 : ++case2;
				else arr[i][j] == 'B' ? ++case2 : ++case1;
			}
			else
			{
				if (j % 2) arr[i][j] == 'B' ? ++case2 : ++case1;
				else arr[i][j] == 'B' ? ++case1 : ++case2;
			}
		}
	}
	return case1 > case2 ? case2 : case1;
}

int main()
{
	int N, M, repaint = 32;
	std::cin >> N >> M;
	char** Chess = new char* [N];
	for (int i = 0; i < N; ++i)
	{
		Chess[i] = new char[M + 1];
		std::cin >> Chess[i];
		Chess[i][M] = 0;
	}

	for (int i = 0; i < N - 7; ++i)
	{
		for (int j = 0; j < M - 7; ++j)
		{
			if(repaint > check(j,i,Chess)) repaint = check(j,i,Chess);
		}
	}

	std::cout << repaint;
}