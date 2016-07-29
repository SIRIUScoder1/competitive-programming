//codechef
//karan
//gcd and lcm

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b == 0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int main()
{
	int test,a,b,k,m;
	cin >> test;
	
	while(test--)
	{
		cin >> a >> b;
		k = gcd(a,b);
		m = (a*b)/k;
		cout << k << " " << m << endl;
	}
	return 0;
}
