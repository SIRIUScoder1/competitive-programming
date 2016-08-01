//final destination
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100000];
	long long int x = 0,y = 0,i;
	scanf("%s",&a);
	for(i = 0;i < strlen(a);i++)
	{
		if(a[i] == 'L')
		{
			x = x -1;
		}
		else if(a[i] == 'R')
		{
			x = x+1;
		}
		else if(a[i] == 'U')
		{
			y = y + 1;
		}
		else if(a[i] == 'D')
		{
			y = y - 1;
		}
	}
	printf("%lld %lld",x,y);
	return 0;
}
