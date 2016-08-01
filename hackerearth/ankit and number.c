// ankit and the numbers
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int test,i,num,k;
	scanf("%llu",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%llu",&num);
		k = pow(2,(num-1))*(num)*(num+1)/2;
		printf("%llu\n",k);
	}
	return 0;
}
