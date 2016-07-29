//codechef
//karan
//piece of cake

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,b[26] = {0},i,sum;
	char a[50];

	cin >> test;
	while(test--)
	{
		scanf("%s",a);
		for(i = 0;i < strlen(a);i++)
		{
			b[a[i] - 'a']++;
		}
		sort(b,b+26);sum = 0;
		for(i = 0;i < 25;i++)
		{
			sum = sum + b[i];
		}
		if(sum == b[25])
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		for(i = 0;i < 26;i++)
		{
			b[i] = 0;
		}
	}
	return 0;
}
