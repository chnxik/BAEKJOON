#include <iostream>

// 1002번 터렛

// 1과 2좌표가 같고 거리가 같음 : -1
// 1과 2좌표가 같고 거리가 다름 : 0

// 두 점이 다 원에 들어가있는지, distacn < ar && br
	//
	// 

// 한 점만 원에 들어가있는지, distance < ar ^ br


// 두 점다 밖에 있는지 distance > ar && ab


// 점이 겹쳐져있는지 a == b 
	// 거리가 다름 : 0
	// 거리가 같음 : -1

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
	// a위치가 b의 안, 걸침, 밖
	
	// b위치가 a의 안, 걸침, 밖

	// 안 안
		// d + 1r == 2r || d + 2r == 1r : 1 // 작은원과 큰원이 겹침
		// d + 1r > 2r || d + 2r > 1r :
	
	// 안 걸침
	
	// 안 밖
	
	// 걸침 안
	
	// 걸침 걸침
	
	// 걸침 밖
	
	// 밖 안
	
	// 밖 걸침
	
	// 밖 밖
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