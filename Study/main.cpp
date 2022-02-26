#include <iostream>
#include <vector>

// 15596번 정수 N개의 합

long long sum(std::vector<int>& a)
{
	long long ans = 0;
	std::vector<int>::iterator aiter = a.begin();
	while (aiter != a.end())
	{
		ans += *aiter++;
	}
	return ans;
}