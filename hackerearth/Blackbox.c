#include <stdio.h>
#include <math.h>
#include <stdlib.h>
unsigned long long int gcd(unsigned long long int x,unsigned long long int y)
{
	if(y == 0)
	{
		return x;
	}
	else 
	{
		return gcd(y,x % y);
	}
}
int main()
{
	unsigned long long int test,i,a,b,c,d,t,z,w;
	scanf("%llu",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%llu %llu %llu",&a,&b,&c);
		d = gcd(a,b);
		if(a>= b && a >= c){
				z= a;t = b;w = c;
			}
		else if(b>=a && b>=c){
			z = b;t = a;w = c;
		}		
		else
		{
			z = c;t = a;w= b;
		}
		if (d == 1)
		{
			if(z*z == t*t + w*w)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else 
		{
			printf("NO\n");
		}
	}
	return 0;
}
