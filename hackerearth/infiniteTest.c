//infinite taking inputs
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100][100];
	char b[100000];
	int i,k = 0,j,u = 0,test,q;
	scanf("%d",&test);
	getchar();
	for(q = 0;q < test;q++)
	{
		gets(b);
		for(i = 0;i < strlen(b);i++)
		{
			if(b[i] != ' ')
			{
				a[k][u] = b[i];
				u++;
			}
			else if(b[i] == ' ')
			{
				a[k][u] = '\0';
				k++;
				u = 0;
			}
		}
		for(j = k;j >= 0;j--)
		{
			printf("%s ",a[j]);
		}
		printf("\n");
		k = 0;u = 0;
	}
	return 0;
}
