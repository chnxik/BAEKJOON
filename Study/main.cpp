#include <iostream>

// 1002�� �ͷ�

// 1�� 2��ǥ�� ���� �Ÿ��� ���� : -1
// 1�� 2��ǥ�� ���� �Ÿ��� �ٸ� : 0

// �� ���� �� ���� ���ִ���, distacn < ar && br
	//
	// 

// �� ���� ���� ���ִ���, distance < ar ^ br


// �� ���� �ۿ� �ִ��� distance > ar && ab


// ���� �������ִ��� a == b 
	// �Ÿ��� �ٸ� : 0
	// �Ÿ��� ���� : -1

class turret
{
public:
	int x, y, r;
	bool operator == (turret& _other)
	{
		if (x == _other.x && y == _other.y) return true;
		else false;
	}
	
};

double distance(turret a, turret b)
{
	int xd = a.x - b.x, yd = a.y - b.y;
	xd *= xd;
	yd *= yd;
	return sqrt(xd + yd);
}

short shape(turret a, turret b)
{
	// a��ġ�� b�� ��, ��ħ, ��
	
	// b��ġ�� a�� ��, ��ħ, ��

	// �� ��
		// d + 1r == 2r || d + 2r == 1r : 1 // �������� ū���� ��ħ
		// d + 1r > 2r || d + 2r > 1r :
	
	// �� ��ħ
	
	// �� ��
	
	// ��ħ ��
	
	// ��ħ ��ħ
	
	// ��ħ ��
	
	// �� ��
	
	// �� ��ħ
	
	// �� ��
}

int main()
{
	int T;
	turret a, b;
	std::cin >> T;
	while (T--)
	{
		std::cin >> a.x >> a.y >> b.x >> b.y >> a.r >> b.r;
		

	}
}