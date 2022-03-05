#include <iostream>

// 7568¹ø µ¢Ä¡

class people
{
public:
	int h;
	int w;
	int rank;

public:
	people()
		: h(0)
		, w(0)
		, rank(1)
	{
		std::cin >> h >> w;
	}
};

int main()
{
	int N;
	std::cin >> N;
	people* p = new people[N];

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (i == j) continue;
			if (p[i].h < p[j].h && p[i].w < p[j].w) ++p[i].rank;
		}
		if (i) std::cout << ' ';
		std::cout << p[i].rank;
	}

	delete[] p;
}