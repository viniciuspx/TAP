#include <bits/stdc++.h>

using namespace std;

char mat[50][50];

int main(int argc, char const *argv[])
{
	int n, m, k;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> mat[i][j];
		}
	}

	for (int i = n-1; i >= 0; i--)
	{
		for (int j = m-1; j >= 0; j--)
		{
			if(mat[i][j] == 'o' ){
				k = i;
				while(mat[k+1][j] == '.'){
					swap(mat[k][j],mat[k+1][j]);
					k++;	
				}
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << mat[i][j];
		}
		cout << endl;
	}


	return 0;
}