#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int n, ac = 0, ma = 0;

	cin >> n;

	long long int v[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		ac += v[i];
		ma = max(v[i],ma);
	}


	if(ma > ac - ma){
		ac -= ma - (ac - ma);
	}



	cout << (ac >> 1LL) << endl;

	return 0;
}
