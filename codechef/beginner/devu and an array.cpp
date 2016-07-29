//codechef
//karan
//devu and array

#include<bits/stdc++.h>
#define ULL unsigned long long int 
using namespace std;

int main()
{
	ULL n,q,a[100000],min,max,x,i;
	cin >> n >> q;
	for(i = 0;i < n;i++)
	{
		cin >> a[i];	
	}
	sort(a,a+n);
	min = a[0];
	max = a[n-1];
	while(q--)
	{
		cin >> x;
		if(n == 1)
		{
			if(a[0] == x)
			{
				cout << "Yes"<< endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		else
		{
			if(x >= min && x <= max)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
	}
	return 0;
}
