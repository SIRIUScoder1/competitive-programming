// naughty sid and sev
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	unsigned long long int test,i;
	double x,h,H,a,theta;
	scanf("%llu",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%lf %lf %lf",&a,&H,&theta);
		x = tan((theta * 3.141593) / 180.0);
		//printf("%f\n",tan(x));
		if(x < H * 1.0/a)
		{
			h = H - (a * x /2.0);
			printf("%d\n",(int)ceil(h));
		}
		else
		{								// equating volume 
			h = (H * H / (2 * a * x));	// H * a * a = (1/2) * H * a * (H / (tan(theta)))
			printf("%d\n",(int)ceil(h));
		}
	}
	return 0;
}
