//andrew and max
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long int test,i,x,y,z;
	double l,m,n,a,b,c,k;
	scanf("%d",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%ld %ld %ld",&x,&y,&z);
		l = x - y + z;
		m = x + y - z;
		n = z - x + y;
		printf("%f %f %f\n",l,m,n);
		a = l / 2.0; 
		b = m / 2.0;
		c = n / 2.0;
		printf("%f %f %f \n",a,b,c);
		k = 2 * (a*b + b*c + c*a);
		printf("%.2f\n",k); 
	}
	return 0;
}
