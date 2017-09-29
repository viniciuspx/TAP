#include <bits/stdc++.h>

using namespace std;

int oc[26];

int main(int argc, char const *argv[])
{
	char str[100];
	int i = 0;

	cin >> str;

	for (i = 0; str[i] ; i++)
	{
		oc[str[i] - 'a']++;
	}

	sort(oc,oc + 26);

	cout << i - (oc[24] + oc[25]) << '\n';

	return 0;
}
