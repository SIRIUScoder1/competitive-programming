#include<stdio.h>
int main()
{
	long long int test,i,num;
	scanf("%d",&test);
	for(i = 0;i < test;i++)
	{
		int num;
		scanf("%d",&num);
		if(num % 2 == 0)
		{
			printf("%d %d",(num/2),(num/2));
		}
		else 
		{
			printf("%d %d",(num/2),((num/2)+1));
		}
		printf("\n");
	}
	return 0;
}
