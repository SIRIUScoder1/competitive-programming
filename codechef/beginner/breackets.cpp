//codechef
//karan
//brackets

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,i,main,bal,j;
	char a[100000];
	cin >> test;
	while(test--)
	{
		scanf("%s",a);bal = 0;main = 0;
		for(i = 0;i < strlen(a);i++)
		{
			if(a[i] == '(')
				bal++;
			if(a[i] == ')')
				bal--;
			if(bal >main)
				main = bal;
		}
		for(j=1;j<=main;j++)
		{
			cout << "(";
		}
		for(j=1;j<=main;j++)
		{
			cout << ")";
		}
		cout << endl;
	}
	return 0;
}
