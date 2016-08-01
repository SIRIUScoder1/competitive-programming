//its all about magic 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	unsigned long long int test,i,touch,temp;
	scanf("%llu",&test);
	for(i = 0;i < test;i++)
	{
		unsigned long long int n_zero = 0,n_one = 1,n;
		scanf("%llu",&n);
		for(touch = 0;touch < n;touch++)
		{
			temp = n_zero;
			n_zero = n_one + n_zero;
			n_one = temp;
		}
		printf("%llu %llu\n",n_one,n_zero);
	}
	return 0;
}
