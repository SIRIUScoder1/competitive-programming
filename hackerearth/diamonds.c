//diamonds
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100][100];
	int test,n,m,i,x,y,q,w,count = 0;
	scanf("%d",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%d %d",&n,&m);
		for(x = 0;x < n;x++)
		{
			for(y = 0;y < m;y++)
			{
				scanf("%s",&a[x][y]);
			}
		}
		for(q = 0;q < n-1;q++)
		{
			for(w = 0;w < m-1;w++)
			{
				if(a[q][w] == '/' &&a[q][w+1] == '\\' && a[q+1][w] == '\\' && a[q+1][w+1]== '/')	//  '\' a whitespace character thats why two \ 
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
		count = 0;
		
	}
	return 0;
}
