#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;

	cin >> n >> m;

	char mat[n][m];

	string in;

	for (int i = 0; i < n; ++i)
	{
		cin >> in;

		for (int j = 0; j < m; ++j)
		{
			mat[i][j] = in[j];
		}
	}

	

	return 0;
}