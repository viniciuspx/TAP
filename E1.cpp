#include <bits/stdc++.h>
int v[1000000] = {0};

using namespace std;

int main(int argc, char const *argv[])
{
	int n, ac=0, aux = 0, max = 0, aux2;
	int k = 0, i, j;

	cin >> n;

	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{

		aux = a[i];

		for (int j = i+1 ; j < n; ++j)
		{
				v[k] = aux + a[j];
				
				if (v[k] > max)
					max = v[k];

				k++;

		}
	}

	int b[max] = {0};

	for (int i = 0; i < k; ++i)
	{
		b[v[i]-1]++;
	}


	for (int i = 0; i < max; ++i)
	{
		aux = b[i];

		for (int j = 0; j < max; ++j)
		{
			if (aux < b[j]){
				aux = b[j];
				aux2 = j;
			}
		}
	}

	for (int i = 0; i < max; ++i)
	{
		if (b[i] == aux)
			ac++;
	}


	cout << aux << " " << ac << endl;

	return 0;
}