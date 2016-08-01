// divisors
/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	unsigned long long int n,a,b,i,count = 0;
	scanf("%llu %llu %llu",&n,&a,&b);
	for(i = 1;i <= n;i++)
	{
		if(i % a == 0 || i % b == 0)
		{
			count++;
		}
	}
	printf("%llu",count);
	return 0;
}
*/
// divisors
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
unsigned long long int lcm(unsigned long long int x,unsigned long long int y)
{
	unsigned long long int max = (x > y) ? x : y;
	while(1)
	{
		if(max % x == 0 && max % y == 0)
		{
			return max;
			break;
		}	++max;
	}
}
int main()
{
	unsigned long long int n,a,b,l,m,k,i,count = 0,x;
	scanf("%llu %llu %llu",&n,&a,&b);
	l = n / a;
	m = n / b;
	k = lcm(a,b);
	//printf("%llu",k); 
	i = 2;
	x = k;
	while(x <= n)		
	{
		count++;
		x = k * i;
		i++;
		printf("%llu %llu\n",count,x);	
	}
	printf("%llu",l+m-count);
	return 0;
}
