// larray's array 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	unsigned long long int test,i,j,size,a[10000],count = 0,m,n,l;
	scanf("%llu",&test);
	for(i = 0;i <test;i++)
	{
		scanf("%llu",&size);
		for(j = 0;j < size;j++)
		{
			scanf("%llu",&a[j]);
		}
		for(m = 0;m < size;m++)		// calculating the number of valid inequalities
		{
			for(n = m+1;n < size;n++)
			{
				if(a[m] > a[n])
				{
					count++;
				}
			}
		}
		if(count % 2 == 0)	// if even then yes else no...
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		count = 0;
	}
	return 0;
}
