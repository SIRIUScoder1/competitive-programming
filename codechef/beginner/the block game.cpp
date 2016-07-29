//codechef
//karan
//the block game
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,flag,i;
	cin >> test;
	char a[10000];
	while(test--)
	{
		scanf("%s",a);flag = 0;
		for(i = 0;i < (strlen(a))/2;i++)
		{
			if(a[i] != a[strlen(a)-1-i])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			cout << "wins" << endl;
		}
		else
		{
			cout << "losses" << endl;
		}
	}
	return 0;
}
