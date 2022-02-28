#include <iostream>
#include <string.h>

// 10757¹ø Å« ¼ö A+B

int main()
{
	std::cout.sync_with_stdio(false);
	char* A = new char[10001], * B = new char[10001], * res = new char[10002];
	std::cin >> A >> B;
	char* pa = &A[(strlen(A)) - 1], * pb = &B[(strlen(B)) - 1], * pc = res;
	int a, b, r, u = 0;
	bool ba = true, bb = true;
	while (true)
	{
		a = ba ? *pa - 48 : 0;
		b = bb ? *pb - 48 : 0;
		if (ba && pa == A)
		{
			a = *pa - 48;
			ba = false;
		}
		else if (ba) --pa;
		if (bb && pb == B)
		{
			b = *pb - 48;
			bb = false;
		}
		else if (bb) --pb;
		r = a + b + u;
		u = r / 10;
		r %= 10;
		*pc++ = r + 48;
		if (!ba && !bb)
		{
			if(u) *pc++ = u + 48;
			*pc-- = 0;
			break;
		}
	}
	while (true)
	{
		std::cout << *pc - 48;
		if (--pc == res)
		{
			std::cout << *pc - 48;
			break;
		}
	}

	delete[] A, B, res;
}