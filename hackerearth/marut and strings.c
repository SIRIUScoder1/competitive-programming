//marut and strings
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int test,count = 0,count1 = 0,j,i;
	char a[100];
	scanf("%d",&test);
	if(test > 10 || test <=0)
	{
		printf("Invalid Test\n");
	}
	else
	{
	for(j = 0;j < test;j++)
	{
	scanf("%s",a);
	if(strlen(a) > 100)
	{
		printf("Invalid Input\n");return 0;
	}
	for(i = 0;i < strlen(a);i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			count++;
		}
		else if(a[i] >= 'A' && a[i] <= 'Z')
		{
			count1++;
		}
	}
	if(count1 == 0 && count == 0)
	{
		printf("Invalid Input\n");
	}
	else if(count > count1)
	{
		printf("%d\n",count1);
	}
	else if(count < count1)
	{
		printf("%d\n",count);
	}
	else if(count == count1)
	{
		printf("%d\n",count);
	}
	count = 0;count1 = 0;
	}
	}
	return 0;
}
