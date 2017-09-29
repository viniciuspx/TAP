#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int r;

	int a,b,c;

	int v[3];

	cin >> a >> b >> c;

	v[0] = (b + 2*c);
	v[1] = (a + c);
	v[2] = (b + 2*a);

	sort(v,v+3);

	r = v[0];

	cout << (r << 1LL) << endl;

	return 0;
}