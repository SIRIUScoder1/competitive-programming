//codechef
//karan
//devu and grapes 

#include<bits/stdc++.h>
#define ULL unsigned long long int 
using namespace std;
int main()
{
	ULL test,n,k,f,i,m,sum,u;
	cin >> test;
	while(test--)
	{
		cin >> n >> k;sum = 0;
		for(i = 0;i < n;i++)
		{
			cin >> f;
			if(f < k)
			{
				sum = sum + k - f;
				continue;
			}
			u = f % k;
			m = k - u;
			sum = sum + min(u,m);
		}
		cout << sum << endl;
	}
	return 0;
}
