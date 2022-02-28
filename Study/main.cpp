#include <iostream>

// 10250¹ø ACM È£ÅÚ
using std::cin;

int main()
{
	int T,H,W,N,f,r;
	cin >> T;
	while (T--)
	{
		cin >> H >> W >> N;
		f = N % H;
		r = N / H;
		std::cout << ((f ? f : H)*100) + (f ? r + 1 : r) << '\n';
	}
}