//codechef
//karan
//chef and string

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,c1=0,c2=0,c3=0,c4=0;
	char b[100000];
	scanf("%s",b);
	for(i = 0;i < strlen(b);i++)
	{
		if(b[i] == 'C')
		{
			c1++;
		}
		else if(b[i] == 'H')
		{
			if(c1 > 0)
			{
				c2++;c1--;
			}
		}
		else if(b[i] == 'E')
		{
			if(c2 >0)
			{
				c3++;c2--;
			}
		}
		else if(b[i] == 'F')
		{
			if(c3>0)
			{
				c4++;c3--;
			}
		}
	}
	cout << c4<< endl;
	return 0;
}
