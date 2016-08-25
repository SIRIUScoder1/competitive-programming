//hackerrank
//save the prisoner

#include<bits/stdc++.h>
#define ULL unsigned long long int
using namespace std;

int main()
{
	ULL test,n,m,s,k;
	cin >> test;
	while(test--)
	{
		cin >> n >> m >> s;
		k = (s+m-1)%n;
		if(k == 0)
		{
			cout << n << endl;
		}
		else
		{
			cout << k << endl;
		}
	}
	return 0;	
}
