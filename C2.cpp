#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n , k, in;
	string egg;

	int lf, hf;

	cin >> n >> k;
	
	lf = 2;
	hf = k - 1;

	for (int i = 0; i < n; ++i)
	{
		cin >> in >> egg;

		if(egg[0] == 'S'){
			if(in + 1 > lf) lf = in + 1;
		}
		if(egg[0] == 'B')
		{
			if(in - 1 < hf) hf = in - 1;
		}
	}

	cout << lf << " " << hf << endl;

	return 0;
}