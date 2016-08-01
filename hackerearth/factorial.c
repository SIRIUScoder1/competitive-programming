//factorial 
#include<stdio.h>
#include<math.h>
int main()
{
	int num,prod = 1,i;
	scanf("%d",&num);
	for(i = 1;i <= num;i++)
	{
		prod = prod * i;
	}
	printf("%d\n",prod);
	return 0;
}
