#include <bits/stdc++.h>

using namespace std;

int r[1000000];
int v[100000];

int main(int argc, char const *argv[])
{

	int n, aux;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	sort(v,v+n);

	for (int i = 0, j = n-1; i <= n/2 && j >= n/2 ; i++,j--)
	{
		r[i] = v[i] + v[j];
	}

	sort(r,r+(n/2));

	cout << r[0] << endl;;

}