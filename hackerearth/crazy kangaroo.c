#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	unsigned long long int t,a,b,m,l;
	scanf("%llu",&t);
	for(l = 0;l < t;l++)
	{
		scanf("%llu",&a);
		scanf("%llu",&b);
		scanf("%llu",&m);
		printf("%llu\n",(b/m - (a+m-1)/m +1));
		/*if(a % m == 0 && b % m != 0)
		{
			printf("%llu\n",(b/m) - (a/m) + 1);
		}
		else if(b % m == 0 && a %m !=0) 
		{
			printf("%llu\n",(b/m)-(a/m));
		}
		else if(b % m == 0 && a %m ==0) 
		{
			printf("%llu\n",(b/m)-(a/m) + 2);
		}
		else 
		{
			printf("%llu\n",(b/m)-(a/m));
		}*/
	}
	return 0;	
}
