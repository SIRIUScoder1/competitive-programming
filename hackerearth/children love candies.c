// children love candies 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	unsigned long long int test,i,n,t,j;
	scanf("%llu",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%llu %llu",&n,&t);		// number of candies and the day limit
		for(j = 0;j < t;j++)
		{
			if(n % 2 == 0)
			{
				n = n / 2;	// number of candies left at 9:00 pm (even)
			}
			else 
			{
				n = n - ((n+1)/2);	// number of candies left at 9:00 (odd)
			}
			n = n - (n / 4);
		}
		printf("%llu\n",n);
	}
	return 0;
}
