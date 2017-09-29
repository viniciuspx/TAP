#include <bits/stdc++.h>

using namespace std;

int main(){

	unsigned int j, r, max = 0, player;
	
	cin >> j >> r;
	
	unsigned int score[j][r];
	unsigned int total[j];
	
	memset(total,0,sizeof(total));
	
	for(int i = 0  ; i < r ; i++){
		for(int k = 0 ; k < j ; k++){
			cin >> score[k][i];
		}
	}
	
	for(int i = 0  ; i < j ; i++){
		for(int k = 0 ; k < r ; k++){
			total[i] += score[i][k];
		}
	}
	
	for(int i = 0 ; i < j ; i++){
		if(total[i] >= max){
			max = total[i];
			player = i;
		}
	}
	
	cout << player + 1 << endl;
	
	return 0;
	
}
