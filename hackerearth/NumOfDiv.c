//number of divisors 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	unsigned long long int test,i,m,n,count = 0,count1 = 0,k;
	scanf("%llu",&test);
	for(m = 0;m < test;m++)
	{
		scanf("%llu",&n);
		k = sqrt(n);
		if(n == 1)
			{
				printf("1\n");
			}
		else
		{
			for(i = 1;i <= k;i++)
			{	
			  if(n % i == 0)
				{
					count++;
				}
				//printf("%llu ",i);
			}
			if(k * k != n)
			{
				printf("%llu\n",2*count);
			}
			else
			{
				printf("%llu\n",2* count -1);
			}
			count = 0;
			count1 = 0;
		}
	}
	return 0;
}
