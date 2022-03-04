#include <iostream>

// 11729번 하노이 탑 이동 순서

void hanoi(int n, int from, int to, int other);
void hanoicnt(int n, int from, int to, int ohter, int* cnt);
void hanoiprint(int n, int from, int to, int otehr);

int main()
{
	int n;
	std::cin >> n;
	hanoi(n, 1, 3, 2);
}

void hanoi(int n, int from, int to, int other)
{
	int cnt = 0;		// 이동 횟수 변수
	int* pcnt = &cnt;	// 이동 횟수 변수 포인터
	hanoicnt(n, from, to, other, pcnt);
	std::cout << cnt << '\n';
	hanoiprint(n, from, to, other);


}
void hanoicnt(int n, int from, int to, int other, int* cnt)
{
	if (!n) return;
	++*cnt;
	hanoicnt(n - 1, from, to, other, cnt);
	hanoicnt(n - 1, other, to, from, cnt);
}
void hanoiprint(int n, int from, int to, int other)
{
	if (!n) return;
	hanoiprint(n - 1, from, other, to);
	std::cout << from << ' ' << to << '\n';
	hanoiprint(n - 1, other, to, from);
}