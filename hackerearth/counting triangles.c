#include<stdio.h>
int main()
{
	unsigned long long int i,n,test,k;
	scanf("%llu",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%llu",&n);
		if(n == 1)
		{
			printf("8\n");
		}
		else 
		{
			k = 8 * n + 6 *(n-1);
			printf("%llu\n",k);
		}
	}
	return 0;
}
