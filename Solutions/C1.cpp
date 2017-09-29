#include <bits/stdc++.h>

using namespace std;
	
int main(int argc, char const *argv[])
{

	int ax, ay, bx, by, distx, disty, dist;
	int battery;


	cin >> ax >> ay;
	cin >> bx >> by;
	cin >> battery;


	distx = ax - bx;
	disty = ay - by;


	if (distx < 0)
	{
		distx *= -1;
	}

	if (disty < 0)
	{
		disty *= -1;
	}
	
	dist = distx + disty;


	if (battery - dist >= 0 && (battery - dist)%2 == 0)
		cout << "Y" << endl;
	else cout << "N" << endl;


	return 0;
}