//roys's life cycle 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,x = 0,y = 0,max = 0,max1 = 0,i;
	char a[1500];
	scanf("%d",&num);
	for(i = 0;i < num;i++)
	{
		scanf("%s",a);
		int j;
		for(j = 0;j = strlen(a);j++)
		{
			if(a[j] == 'C')
			{
				x++;y++;
			}
			else 
			{
				if(max < x)
					max = x;
				if(max1 < y)
					max1 = y;
					x = 0;
					y =0;
			}
		}
		if(x > max)
			max = x;
		if(y > max1)
			max1 = y;
	}
	printf("%d %d\n",max,max1);
	return 0;
}
