#include <iostream>
#include <vector>

// 15596�� ���� N���� ��

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