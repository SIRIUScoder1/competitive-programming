//find product 
/*
#include <stdio.h>
#include<math.h>
int main()
{
	int num,i,a[1005];
	scanf("%d",&num);
	for(i = 0;i < num;i++)
	{
		scanf("%d",&a[i]);
	}
	int prod = 1;
	for(i = 0;i < num;i++)
	{
		prod = (prod * a[i]) % 1000000007;
	}
	printf("%d\n",prod);
	return 0;
}
*/
//palindrome check 
/*
#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag = 0;
	char a[105];scanf("%s",a);
	for(i = 0; i < strlen(a);i++)
	{
		if(a[i] != a[strlen(a)-1-i])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}
	return 0;	
}
*/
//counting divisors
#include<stdio.h>
#include<math.h>
int main()
{
	long int l,r,k,i,count = 0;
	scanf("%ld %ld %ld",&l,&r,&k);
	for(i = l;i <= r;i++)
	{
		if(i % k == 0)
		{
			count++;
		}
	}
	printf("%ld",count);
	return 0;
}
