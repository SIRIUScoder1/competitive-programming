#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,flag = 0,flag1 = 0;
	scanf("%d",&n);int i;
	for(i = 0;i < n;i++)
	{
		char c;
		scanf("%c",&c);
		while(c != '\n')
		{
			if(c == '$')
			{
				printf("$");
				flag = 1;
			}
			if(c >= '0' && c <= '9'&& flag == 1)
			{
				if(c == '0' && flag1 == 0)
				{
					flag1++;
					continue;
				}
				else if(c != '0')
				{
					printf("%c",c);
					flag1 = -1;
				}
			}
			if(c == ' ')
			{
				continue;
			}
			if(flag == 1 && c < '0' || c > '9')
			{
				break;
			}
			scanf("%c",&c);
		}
	}
	return 0;
}
