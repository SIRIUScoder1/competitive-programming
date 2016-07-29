//SIRIUScoder
//Extreamly dangerous virus
#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int power(long long int a, long long int b) {
	if(b == 0) return 1;
	long long int  x = power(a,b/2);
	x = (x*x) % MOD;
	if(b&1) x = (x* a) %MOD;
	return x;
}
int main()
{
	long long int a,b,t,k,m;
	cin >> a >> b >> t;
		
	k = (a+b)/2;
	m = power(k,t);
	m = m % MOD;
	cout << m << endl;
	return 0;
}
