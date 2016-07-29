//codechef
//karan
//chef and coloring 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int test,b[3] = {0},size,i;
	char a[100000];
	cin >> test;
	while(test--)
	{
		cin >> size;
		scanf("%s",a);
		for(i = 0;i < size;i++)
		{
			if(a[i] == 'R')
			{
				b[0]++;
			}
			else if(a[i] == 'G')
			{
				b[1]++;
			}
			else
			{
				b[2]++;
			}
		}
		sort(b,b+3);
		cout << size-b[2] << endl;
		for(i = 0;i < 3;i++)
		{
			b[i] = 0;
		}
	}
	return 0;
}
