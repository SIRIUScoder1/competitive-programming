//aniuddhas-queue-4
#include<stdio.h>
#include<math.h>
int main()
{
	int test,k,a[10000],x,sum,u,num,i;
	scanf("%d",&test);
	for(k = 0;k < test;k++)
	{
		scanf("%d",&num);
		for(i = 0;i < num;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		sum  = 0;
		while(sum < x)
		{
			sum = sum + a[u];
			if(sum < x && u == num-1)
			{
				u = u % (num-1)
				sum = sum + a[u];
			}
			if(sum == x || sum > x)
			{
				printf("%d\n",u+1);
				break;
			}
			u++;
		}
		//printf("%d %d\n",sum,u-1);
		sum = 0;u = 0;
	}
	return 0;
}
