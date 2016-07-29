//codechef
//karan
//malvika and balloon

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int test,ca,cb,i;
	char a[1000];
	scanf("%d",&test);
	while(test--)
	{
		scanf("%s",a);ca = 0;cb = 0;
		for(i = 0;i < strlen(a);i++)
		{
			if(a[i] == 'a')
			{
				ca++;
			}
			else
			{
				cb++;
			}
		}
		if(ca == cb)
		{
			printf("%d\n",ca);
		}
		else if(ca == 0 || cb == 0)
		{
			printf("0\n");
		}
		else
		{
			if(ca > cb)
			{
				printf("%d\n",cb);
			}
			else
			{
				printf("%d\n",ca);
			}
		}
	}
	return 0;
}
