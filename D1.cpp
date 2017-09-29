#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int d, ac = 0, x;
	int h1, h2, m1, m2;

	m1 = m2 = 0;

	h1 = 1;
	h2 = 2;

	cin >> d;

	x =  d/720;

	ac = 31*x;

	d = d%720;


	for (int i = 0; i < d; ++i)
	{
		
		m2++;
		
		if (m2 > 9){
			m1++;
			m2 = 0;
		}
		
		if (m1 > 5){
			h2++;
			m1 = 0;
		}
		
		if (h2 > 2 && h1 == 1)
		{
			h1 = 0;
			h2 = 1;
		}

		if (h2 > 9)
		{
			h1++;
			h2 = 0;
		}

		if(h1 != 0) 
			if(((h1 - h2) == (h2 - m1)) && ((h2 - m1) == (m1 - m2))){
				ac++;
			}


		if(h1 == 0)
			if((h2 - m1) == (m1 - m2)){
				ac++;
			}
	
}

	cout << ac << endl;
	return 0;
}

