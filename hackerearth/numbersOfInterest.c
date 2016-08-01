#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	unsigned long long int test,i,a[1000],j,x,y,n,sum = 0,k,l;
	scanf("%llu",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%llu",&x);	// number of numbers in the series
		scanf("%llu",&y);	// the number which is to fixed 
		scanf("%llu",&n);	// the element to be fixed 
		for(j = 0;j < x;j++)
		{
			a[j] = y;
		}
		for(k = 0;k < n;k++)
		{
			for(l = 0;l < x;l++)
			{
				sum = sum + a[k + l];
			}
			a[j] = sum;
			sum = 0;
			//printf("%llu ",a[j]);
			j++;
		}
		printf("%llu\n",a[n-1]);
	}
	return 0;
}
