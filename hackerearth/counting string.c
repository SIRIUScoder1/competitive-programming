//complete string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,b[26] = {0},i,j,k,flag = 0,u;
	char a[200];
	scanf("%d",&num);
	while(num--)
	{
		scanf("%s",&a);
		for(i = 0;i < strlen(a);i++)
		{
			k = (int)a[i] - 97;
			b[k]++;	
		}
		for(j = 0;j < 26;j++)
		{
			if(b[j] == 0)
			{
				flag = 1;break;
			}
		}
		if(flag == 1)
		{
			printf("NO\n");
		}
		else 
		{
			printf("YES\n");
		}
		flag = 0;
		for(u = 0;u < 26;u++)
		{
			b[u] = 0;
		}	
	}
	return 0;
}
