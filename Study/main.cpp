#include <iostream>

// 10871�� X���� ���� ��

int main()
{
	int N, X;
	std::cin >> N >> X;
	int* nums = new int[N];
	bool ins = false;
	for (int i = 0; i < N; ++i) std::cin >> nums[i];
	for (int i = 0; i < N; ++i)
	{
		if (nums[i] < X)
		{
			if (ins) std::cout << " ";
			std::cout << nums[i];
			ins = true;
		}
	}
	delete[] nums;
}