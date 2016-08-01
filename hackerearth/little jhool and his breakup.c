#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[105];
	char b[4] = {'l','o','v','e'};
	int i,count = 0;
	scanf("%s",a);
	int idx = 0;
	for(i = 0;i < strlen(a);i++)
	{
		if(a[i] == b[idx])
		{
			count++;idx++;
		}
		if(idx == 4)
		{
			printf("I love you, too!\n");
			break;
		}
		if(idx != 4 && i == (strlen(a)-1))
		{
			printf("Let us breakup!\n");
			break;
		}
	}
	return 0;	
}
