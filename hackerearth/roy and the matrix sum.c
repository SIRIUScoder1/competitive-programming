// roy and matrix sum 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	unsigned long long int test,a[100][100],sum = 0,i,p,k,n;
	scanf("%llu",&test);
	for(k = 0;k < test;k++)
	{
		scanf("%llu",&n);
		for(i = 0;i < n;i++)
		{
			p = (i)*(i+1)/2;
			//printf("%llu\n",p);
			sum = sum + p;
		}
		printf("%llu\n",2*sum);
		sum = 0;
	}
	return 0;
}
