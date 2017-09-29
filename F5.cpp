#include <bits/stdc++.h>

using namespace std;

int v[1000];

int main(int argc, char const *argv[])
{
	int n, m, nc, r = 0;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	sort(v,v+n);

	if(n < m)
		r = n;
	else{
		nc = v[n-m];
		for (int i = 0; i < n; ++i)
		{
			if(v[i] >= nc)
				r++;
		}
	}

	cout << r << endl;

	return 0;
}