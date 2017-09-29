#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	int n, ac = 0, aux;

	int v[10];
	string string[10];

	cin >> n;

	for (int j = 0; j < n; ++j)
	{
		cin >> string[j];
		cin >> v[j];
	}

	for (int i = 1; i <= 100; ++i)
	{
		aux = i;
		for (int j = 0; j < n; ++j){
			if(string[j][0] == 'A'){
				aux += v[j];
			}
			if(string[j][0] == 'M'){
				aux *= v[j];
			}
			if(string[j][0] == 'S'){
				aux -= v[j];
				if(aux < 0){ 
					ac++;
					break;
				}
			}
			if(string[j][0] == 'D'){
				if(aux%v[j] != 0){ 
					ac++;
					break;
				}
				else aux /= v[j];
			}
		}
	}

	cout << ac << endl;

	return 0;
}