#include <bits/stdc++.h>

#define q 3

using namespace std;

int main(int argc, char const *argv[])
{
	int t1[q], t2[q];

	cin >> t1[0] >> t1[1] >> t1[2];
	cin >> t2[0] >> t2[1] >> t2[2];

	sort(t1,t1+3);
	sort(t2,t2+3	);

	if(t1[0] == t2[0] && t1[1] == t2[1] && t1[2] == t2[2] && t1[0]*t1[0] + t1[1]*t1[1] == t1[2]*t1[2])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


	return 0;
}