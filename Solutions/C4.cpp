#include <bits/stdc++.h>

using namespace std;

int main(){

	float C, A, R;
	
	cin >> C >> A;
	
	A += 1;
	
	if(A < C){
		R = 1;
	}
	else R = (int)ceil(A/C);

	cout << R << endl;

}
