#include <iostream>

// 4344번 평균은 넘겠지

using std::cin;

int main()
{

	std::cout.precision(5);

	int C, N, score[1000];
	double avg,N2;
	cin >> C;
	for (int i = 0; i < C; ++i)
	{
		cin >> N;
		avg = 0;
		N2 = 0;
		for (int j = 0; j < N; ++j)
		{
			cin >> score[j];
			avg += score[j];
		}
		avg = avg/N;
		for (int j = 0; j < N; ++j)
		{
			if (score[j] > avg) ++N2;
		}
		printf("%.3lf%c\n", N2 / N * 100,'%');
	}
}