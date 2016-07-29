//codechef
//karan
//chef and the wildcard matching 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,flag;
	cin >> test;
	char a[15],b[15];
	while(test--)
	{
		scanf("%s",a);
		scanf("%s",b);
			flag = 0;
			for(int i = 0;i < strlen(a);i++)
			{
				if(a[i] != b[i])
				{
					if(a[i] != '?' && b[i] != '?')
					{
						cout << "No" << endl;
						flag = 1;
						break;
					}
				}
			}
			if(flag == 0)
			{
				cout << "Yes" << endl;
			}
		
	}
	return 0;
}
