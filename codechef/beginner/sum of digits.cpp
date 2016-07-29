//codechef
//karan
//sum of digits
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,i,sum;
	char a[100000];
	cin >> test;
	while(test--)
	{
		scanf("%s",a);
		sum = 0;
		for(i =0;i < strlen(a);i++)
		{
			sum = sum + (a[i] - '0');
		}
		cout << sum << endl;
	}
	return 0;
}
