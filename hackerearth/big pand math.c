#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	unsigned long long int a,b,sum = 0,k,count = 0,count1 = 0,sum1 = 0,sum2 = 0,sum3 =0,count2 = 0,count3 = 0,n,t,m,u,l,c,d;
	scanf("%llu",&a);
	scanf("%llu",&b);
	k = a,l = b;
	while(k / 10 != 0 || k == 6)
	{
		if(k % 10 == 6)
		{
			sum = sum + pow(10,count);
			k = k /10;
		}
		else
		{
			k = k/10;
		}
		count++;
		//printf("%llu\n",k);
		//printf("%llu\n",sum);
	}
	while(l / 10 != 0 || l ==  6 )
	{
		if(l % 10 == 6)
		{
			sum1 = sum1 + pow(10,count1);
			l = l /10;
		}
		else
		{
			l = l/10;
		}
		count1++;
	}
	c = a - sum;
	d = b - sum1;
	//printf("%llu %llu\n",c,d);
	m = a;
	u = b;
	while(m / 10 != 0 || m == 5)
	{
		if(m % 10 == 5)
		{
			sum2 = sum2 + pow(10,count2);
			m = m /10;
			
		}
		else
		{
			m = m/10;	
		}
		//printf("%llu\n",m);
		count2++;	
	}
	//printf("%llu\n",count2);
	//printf("%llu\n",sum2);
	while(u / 10 != 0 || u == 5)
	{
		if(u % 10 == 5)
		{
			sum3 = sum3 + pow(10,count3);
			u = u /10;
		}
		else
		{
			u = u/10;
		}
		count3++;
	}
	n = a + sum2;
	t = b + sum3;
	//printf("%llu %llu \n",n,t);
	//printf("%llu %llu",(c+d),(n+t));
	return 0;
	//printf("%llu",sum);
}
