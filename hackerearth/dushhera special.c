#include<stdio.h>
int main()
{
	long int n,p,k,test,i,j;
	scanf("%d",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%d",&p);
		scanf("%d",&k);
		for(j = 1;j <= p;j++)
		{
			printf("%d ",(k+1)*j);
		}
		printf("\n");
	}
	return 0;
}
