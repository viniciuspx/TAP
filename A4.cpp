#include <bits/stdc++.h>

using namespace std;


int vetor[8] = {1,2,6,24,120,720,5040,40320};

int main(int argc, char const *argv[])
{
	
	int n;

	int ac = 0;
	
	cin >> n;

	while(n != 0){
	 	for (int i = 7; i >= 0; --i)
	 	{
	 		if(n >= vetor[i]){
	 			ac++;
	 			n -= vetor[i];
	 			break;
	 		}
	 	}
	 }
	
	cout << ac << endl;

	return 0;
}