//prateek and friends 		karan 	10-05-16
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int test,k;
	int n,x,i,j,a[100000],m,flag = 0;
	scanf("%d",&test);
	for(k = 0;k  < test;k++)
	{
		scanf("%d %d",&n,&x);
		for(j = 0;j < n;j++)
		{
			scanf("%d",&a[j]);
		}
		m = 0;int sum = a[0],
		for(i = 0;i < n;i++)
		{
			while(sum > x)
			{
				sum = sum - a[m];
				m++;
			}
			if(sum == x)
			{
				flag = 1;
			}
			sum = sum + a[i];
		}
		while(sum > x)
		{
			sum = sum - a[m];
			m++;
		}
		if(sum == x)
		{
			flag = 1;
		}
		if(flag == 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
