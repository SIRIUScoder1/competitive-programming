//codechef
//karan
//chef and two strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,sum1,sum2,i;
	char a[101],b[101];
	cin >> test;
	while(test--)
	{
		scanf("%s",a);scanf("%s",b);
		sum1 = 0;sum2 = 0;
		for(i = 0;i < strlen(a);i++)
		{
			if(a[i] >= 'a' && a[i] <= 'z' && b[i] == '?')
			{
				sum2++;					//for max
			}
			else if(a[i] == '?' && b[i] >= 'a' && b[i] <= 'z')
			{
				sum2++;
			}
			else if(a[i] != b[i])
			{
				sum1++;
				sum2++;
			}
			else if(a[i] == '?' && b[i] == '?')
			{
				sum2++;
			}
		}
		cout << sum1 << " " << sum2 << endl;
	}
	return 0;
}
