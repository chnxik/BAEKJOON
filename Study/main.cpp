#include <iostream>

// 1546¹ø Æò±Õ

using std::cin;

int main()
{
	std::cin.tie(NULL);

	int N, score[1000] = { 0, }, M = 0;
	double avg = 0;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> score[i];
		if (M < score[i]) M = score[i];
	}
	for (int i = 0; i < N; ++i)
	{
		avg += (score[i] / (double)M) * 100;
	}
	std::cout << avg / N;
}