//palindrome
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100000];
	gets(a);
	int count = 0,u;
	for(u = 0;u < strlen(a);u++)
	{
		if(a[u] != a[0])
		{
			break;
		}
		else
		{
			count++;
		}
	}
	if(count == strlen(a))
	{
		printf("0");
		return 0;
	}
	int i,count1 = 0,k;
	for(i = 0;i < strlen(a);i++)
	{
		if(a[i] == a[strlen(a) - 1 - i])
		{
			k++;
		}
		else
		{
			printf("%d",strlen(a));
			break;
		}
	}
	if(k == strlen(a))
	{
		printf("%d",(k/2)+1);
	}
	return 0;
}
