//chandu and his game
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long long int n,k,x[1000],y[1000],z[1000],i,j,l,sum = 0,s,t,a[100][100] = {0},q;
	scanf("%lld",&n);
	scanf("%lld",&k);
	for(i = 0;i < k;i++)
	{
		scanf("%lld",&x[i]);
	}
	for(j = 0;j < k;j++)
	{
		scanf("%lld",&y[j]);
	}
	for(l = 0;l < k;l++)
	{
		a[x[l]][y[l]]++;
		if(a[x[l]][y[l]] == 1)
		{
		if(x[l] <= n/2 && y[l] <= n/2)
		{
			z[l] = x[l] + y[l];
			//printf("%llu ",z[l]);
		}
		else if(x[l] >= n/2+1 && y[l] >= n/2+1)
		{
			z[l] = 2*n - x[l] - y[l];
			//printf("%llu ",(n - x[l]) + (n - y[l]));
		}
		else if(x[l] <= n/2 && y[l] > n/2)
		{
			z[l] = x[l]  + n - y[l];
			//printf("%llu ",z[l]);
		}
		else if(x[l] > n/2 && y[l] <= n/2)
		{
			z[l] = n - x[l] + y[l];
			//printf("%llu ",z[l]);
		}
		}
		sum = sum + z[l];
	}
	printf("%lld\n",sum);
	return 0;
}
