//roy's boolean function and gcd program 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void prime (unsigned long long int  y)
{
   int i, FLAG=1;
   for(i=2;i<sqrt(y);i++)
   {
      if(y%i == 0)
      {
         FLAG = 0;
         break;
      }
   }
   if(FLAG == 1)
   {
      printf("TRUE\n");
   }
   else
   {
      printf("FALSE\n");
   }
}
unsigned long long int gcd(unsigned long long int x,unsigned long long int y)
{
	if(x == y)
	{
		return x;
	}
	if(x > y)
	{
		return gcd((x-y),y);
	}
	return gcd(x,(y-x));
}
int main()
{
	int test;
	unsigned long long int i,n,j,count = 0,k;
	scanf("%d",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%llu",&n);
		for(j = 1;j < n;j++)
		{
			k = gcd(j,n);
			//printf("%llu\n",k);
			if(k == 1)
			{
				count++;
			}
		}
		//printf("%llu\n",count);
		if(count == 1 || count == 0 ||count == 4)
		{
			printf("FALSE\n");
		}
		else 
		{
			prime(count);
		}
		count = 0;
	}
	return 0;
}

/* program to calculate gcd of two numbers

int gcd (intx,int y)
{
if(x == y)
return x;
if(x > y)
	return gcd((x-y),y)
return gcd(x,(y-x));
}
*/

