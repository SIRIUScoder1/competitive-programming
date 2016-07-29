//akhil and colored ball 
//karan
// codechef
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int test,i,k;
	char x[100000],y[100000];
	cin >> test;
	while(test--)
	{
		scanf("%s",x);
		scanf("%s",y);
		i = 0;
		while(x[i] != '\0')
		{
			if(x[i] == 'W' && y[i] == 'W')
			{
				cout << 'B';
			}
			else if(x[i] == 'B' && y[i] == 'B')
			{
				cout << 'W';
			}
			else if(x[i] == 'W'&& y[i] == 'B')
			{
				cout << 'B';
			}
			else if(x[i] == 'B' && y[i] == 'W')
			{
				cout << 'B';
			}
			i++;
		}
		cout << endl;
	}
	return 0;
}
