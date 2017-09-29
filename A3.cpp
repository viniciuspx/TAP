#include <bits/stdc++.h>

using namespace std;

string alpha = "abcdefghijklmnopqrstuvwxyz";

int dp[100][100];

int lcs(char *str,int n, int m);

int main(int argc, char const *argv[])
{
	char str[50];

	cin >> str;

	int n = strlen(str);

	memset(dp,-1,sizeof(dp));

	cout << 26 - lcs(str,n,26) << endl;

	return 0;
}

int lcs(char *str,int n, int m){
	if(n == 0 || m == 0)
		return 0;
	if(dp[n][m] != -1)
		return dp[n][m];
	if(str[n-1] == alpha[m-1])
		return dp[n][m] = 1 + lcs(str,n-1,m-1);
	else 
		return dp[n][m] = max(lcs(str,n,m-1),lcs(str,n-1,m));
}
