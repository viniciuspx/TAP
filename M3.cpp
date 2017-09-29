#include <bits/stdc++.h>

using namespace std;

int v[51];

int test(int n);

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	cout << test(n-1) << endl; 

	return 0;
}

int test(int n){

	int a, b;

	if(n == 0)
		return 1;

	if(v[n] < v[]n)
		a = 1 + test(n-1);

	if(v[n-1] < v[n])
		b = 1 + test(n-1);

	if(v[n-1] == v[n]){
		b = 0;
		a = test(n-1);
	}

	cout << "a,b = " << a << "," << b << " " << endl;

	return a+b;
}