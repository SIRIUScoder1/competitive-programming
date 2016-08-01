#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	unsigned long long int a,b,n,k,r,count = 0,m;
	scanf("%llu",&a);
	scanf("%llu",&b);
	scanf("%llu",&n);
	r = 0;
	k = abs(a-b);
	//printf("%llu",k);
	while(r <=n)
	{
		if(r <= n)
		{
			r = r + (a-b);
			count++;
		}
		m = r + a;
		if(m >= n)
		{
			count++;
			break;
		}		
		else
		{
			m = 0;
		}
	}
	printf("%llu",count);
}
