// matrix symmetry 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int test,row,col,n,count,i;
	char a[100][100];
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&n);
		count = 0;
		for(row = 0;row < n;row++)
		{
			for(col = 0;col < n;col++)
			{
				scanf("%c",&a[row][col]);
			}
		}
		for(i = 0;i < n;i++)
		{
			if(strcmp(a[i],a[n-1-i] == 0))
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
