// find the ring 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	unsigned long long int test,i,swap,pos,k;
	scanf("%llu",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%llu %llu",&pos,&swap);
		k = swap - pos;
		if(swap == 0)
		{
			printf("%llu\n",pos);
		}
		else
		{
			printf("%llu\n",k % 2);
		}
	}
	return 0;
}
