//codechef
//karan
//farmer and his plots

#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
	if(y == 0)
	{
		return x;
	}
	return gcd(y,x%y);
}
int main()
{
	int test,a,b,k;
	cin >> test;
	while(test--)
	{
		cin >> a >> b;
		k = gcd(a,b);
		//cout << k << endl;
		cout << (a/k)*(b/k) << endl;
	}
	return 0;
}
