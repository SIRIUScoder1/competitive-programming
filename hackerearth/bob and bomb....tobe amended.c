//bob and the bombs		
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int test,k;
	long int count = 0,i,j;
	char a[100000];
	scanf("%d",&test);
	for(k = 0;k < test;k++)
	{
		scanf("%s",&a);
		for(i = 0;i < strlen(a);i++)
		{
			if(a[i] == 'B')
				{
					if(a[i-2] == 'W')
					{
						a[i-2] = '#';
					}
					if (a[i-1] == 'W')
					{
						a[i-1] = '#';
					}
					if(a[i+1] == 'W')
					{
						a[i+1] = '#';
					}
					if(a[i+2] == 'W')
					{
						a[i+2] = '#';
					}
				}
		}
		//printf("%s\n",a);
		for(j = 0;j < strlen(a);j++)
		{
			if(a[j] == '#')
				count++;
		}
		printf("%ld\n",count);
		count = 0;
	}
	return 0;
}
