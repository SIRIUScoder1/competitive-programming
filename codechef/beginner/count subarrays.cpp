//codechef
//karan
//count subarray

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int test,m,size,a[100000],count;
	cin >> test;
	while(test--)
	{
		cin >> size;
		m = 0;
		for(int i = 0;i < size;i++)
		{
			cin >> a[i];
		}
		count = 0;
		for(int j = 0;j < size;j++)
		{
			if(a[j] <= a[j+1])
			{
				count++;
			}
			else
			{
				count++;
				m = m + (count*(count+1))/2;
				count = 0;
			}
		}
		cout << m << endl;
	}
	return 0;
}

/*
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int x,b[n],sum=0,i,y;
        std::fill(b,b+n,1);
        scanf("%lld",&y);
        for(i=1;i<n;i++)
        {
            scanf("%lld",&x);
            if(x>=y)
                b[i]=b[i-1]+1;
            else
                b[i]=1;
            y=x;
        }
        for(i=0;i<n;i++)
            sum=sum+b[i];
        printf("%lld\n",sum);
    }
    return 0;
}
*/
