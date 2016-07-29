//codechef
//karan
//cutting recipes

#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
	if(y == 0)
	{
		return x;
	}
	return gcd(y,x%y);				//return gcd(b,a%b);
}
int main()
{
	int test,num,i,j,k,m,u,a[100];
	cin >> test;
	
	while(test--)
	{
		cin >> num;
		for(i = 0;i < num;i++)
		{
			cin >> a[i];
		}
		k = a[0];
		for(i = 1;i < num;i++)			//logic to get gcd of many numbers
		{
			k = gcd(k,a[i]);
		}
		for(i = 0;i < num;i++)
		{
			cout << a[i]/k << " ";
		}
		cout << endl;
	}
	return 0;
}
