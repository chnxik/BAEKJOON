#include <iostream>
// 2775번 부녀회장이 될테야

using namespace std;

int trinum(int k, int n)
{
	if (1 == k) return n * (n + 1) / 2;
	if (1 == n) return 1;
	return trinum(k, n - 1) + trinum(k - 1, n);
}

int main()
{
	int T, k, n;
	cin >> T;
	while (T--)
	{
		cin >> k >> n;
		cout << trinum(k, n) << '\n';
	}
}