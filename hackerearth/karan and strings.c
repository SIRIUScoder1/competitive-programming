//karan and strings 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int test,i,j;
	char a[1000000];
	scanf("%d",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%s",a);
		if(strlen(a) == 1)
		{
			printf("%c\n",a[0]);
		}
		else
		{
			for(j = 0;j < strlen(a);j++)
			{
				if(a[j]!= a[j+1] && (j != (strlen(a)-1)))
				{
					printf("%c",a[j]);
					//printf("%d ",j);
				}
			}	
			printf("%c\n",a[(strlen(a)-1)]);
		}
	}	
	return 0;
}
