#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	long long int len,i,count = 0,max,count1 = 0,count2 = 0,j;
	scanf("%lld",&len);
	char a[1000000];
	scanf("%s",a);
	for(i = 0;i < len;i++)
	{
		if(a[i] == 'w')
		{
			count++;
		}
	}
	max = len + count;
	
	for(j = 0;j < len;j++)
	{
		if(a[j] != 'v' || a[j] != 'w')
		{
			count1++;
		}
		else
		{
			k = j;
			while(a[k] == 'v' || a[k] == 'w')
			{
				if(a[k] == 'v')
				{
					count2++;
				}
				else if (a[k] == 'w')
				{
					count2 = count2 + 2;
				}
				k++;
			}
			
			int value = 0;
			if(count2 %2 == 0)
			{
				value =(count2/2);
			}
			else 
			{
				value = (count2/2) + 1;
			}
			count1 = count1 + value;
		}
	}
	
	printf("%lld %lld",count1,max);
	return 0;
}
