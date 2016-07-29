//codechef
//karan
// entrance exam


#include<bits/stdc++.h>
#define ULL unsigned long long int
using namespace std;
int main()
{
	ULL test,sum,c,sum1[10000],t,u,y,e,m,k,n,i,l,q;
	cin >> test;
	while(test--)
	{
		cin >> n >> k >> e >> m;
		for(u = 0;u < n-1;u++)
		{
			sum = 0;
			for(i = 0;i < e;i++)
			{
				cin >> t;		//inputting the marks 
				sum = sum + t;
			}
			sum1[u] = sum;
		}
		sum = 0;
		for(y = 0;y < e-1;y++)
		{
			cin >> t;
			sum = sum + t;
		}
		l = sum;
		//cout << l << endl;
		sort(sum1,sum1+n-1);
		/*for(c = 0;c < n-1;c++)
		{
			cout << sum1[c] << " ";
		}*/
		if(l <= sum1[n-1-k])
		{
			if(m < sum1[n-1-k] - l +1)
			{
				cout << "Impossible" << endl;
			}
			else
			{
				cout << sum1[n-1-k] - l +1 << endl;
			}
 		}
 		else if(sum1[n-1-k] < l)
 		{
 			cout << "0" << endl;
		}
		
	}
	return 0;
}
