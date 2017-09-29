#include <bits/stdc++.h>

using namespace std;

typedef struct _name
{
	char first[11];
	char last[11];

} name;

void sort_names(name *names, int n);

int main(int argc, char const *argv[])
{
	char x;
	int n;
	cin >> n;

	name names[n];


	for (int i = 0; i < n; ++i)
	{
		cin >> names[i].first >> names[i].last;
	}

	sort_names(names,n);
	

	for (int i = n-1; i >= 0; --i)
	{
		cout << names[i].first << " " << names[i].last << endl;
	}

	return 0;
}

void sort_names(name *names, int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (strcmp(names[i].last,names[j].last) > 0)
			{
				swap(names[i],names[j]);
			}
			else if (strcmp(names[i].last,names[j].last) == 0)
			{
				if(strcmp(names[i].first,names[j].first) > 0){
					swap(names[i],names[j]);
				}
			}
		}
	}
}