//acronym 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[100][100],b[100][100],c[100]={'0'},u = 0;
	int k,i,j,count = 0,y;
	scanf("%d",&k);
	for(i = 0;i < k;i++)
	{
		scanf("%s",&a[i]);
	}
	int l;
	scanf("%d",&l);
	for(j = 0;j < l;j++)
	{
		scanf("%s",&b[j]);
	}
	for(i = 0;i < l;i++)
	{
		for(j = 0;j < k;j++)	//
		{
			if(strcmp(b[i],a[j]) == 0)
			{
				break;
			}
			else
			{
				count++;
			}
		}
		if(count == k)
		{
			c[u] = b[i][0] - 32;
			u++;
		}
		count = 0;
	}
	printf("%c",c[0]);
	for(y = 1;y < strlen(c);y++)
	{
		printf(".%c",c[y]);
	}
	return 0;	
}
