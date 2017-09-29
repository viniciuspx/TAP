#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char op[10];

	scanf("%[^\n]",op);

	cout << ((op[0] - '0') + (op[4] - '0') == (op[8] - '0') ? "YES" : "NO") << endl;


	return 0;
}