#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k, sum;

	cin >> n >> k;

	sum = n;

	for (int i = 0; i < k; ++i)
	{
		n = n * 10;
		sum = sum + n;
	}

	cout << sum << "\n";

	return 0;
}