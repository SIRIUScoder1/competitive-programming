// palindrome index 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	unsigned long long int test,i,u,j,k;
	char a[100000];
	scanf("%llu",&test);
	for(u = 0;u < test;u++)
	{
		scanf("%s",a);
		i = 0;j = (strlen(a)-1);
		while(i < j)
		{
			if(a[i] == a[j])
			{
				i++;j--;
			}
			else
			{
				break;
			}
		}
		if(i>= j)
		{
			printf("-1\n");
			continue;
		}
		int saveleft = i;
		int saveright = j;
		i++;
		int leftfault = 1;
		while(i < j)
		{
			if(a[i] == a[j])
			{
				i++;
				j--;
			}
			else
			{
				leftfault = 0;
				break;
			}
		}
	 printf("%d\n", leftfault ? saveleft : saveright);
	}
	return 0;
}
