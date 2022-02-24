#include <iostream>

// 2577번 숫자의 개수

using std::cin;

int main()
{
	int a,b,c, res, nums[10] = { 0, };
	cin >> a >> b >> c;
	res = a * b * c;
	while(res)
	{
		++nums[res % 10];
		res /= 10;
	}
	for (int i = 0; i < 10; ++i) std::cout << nums[i] << '\n';
}