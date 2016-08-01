//mystery 14
#include<stdio.h>
#include<math.h>
int main()
{
	int test,k;
	long int a[100000],i,sum = 0;
	scanf("%d",&test);
	for(k = 0;k < test;k++)
	{
		int num;
		scanf("%d",&num);
		for(i = 0;i < num;i++)
		{
			scanf("%ld",&a[i]);
		}
		for(i = 0;i < num;i++)
		{
			if(a[i] % 2 != 0)
			{
				sum = sum + a[i];
			}
		}
		printf("%ld\n",sum);
		sum = 0;
	}
}
