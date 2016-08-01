#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	unsigned long long int n,i,a[100000],j,count = 0;
	scanf("%llu",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%llu",&a[i]);
	}
	for(i = 0;i < n;i++)
	{
		small = a[i];
		for(j = (i+1);j < n;j++)
		{
			if(small == a[j])
			{
				count++;
			}
		}
	}
	printf("%llu",count);
	return 0;
}

