#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	unsigned long long int test,j,ans,r,d,s_infi,m,p,l,y;
	scanf("%llu",&test);
	for(j = 0;j < test;j++)
	{
		scanf("%llu",&p);	// initial food given 
		scanf("%llu",&m);	// the food increment done
						// initial people present
		// the logic of arithmatico - geometrico series
	/*	r  = 2; // number of people go in gp
		l = p *(-1);
		y = (m*r);
		s_infi = l + y;
		printf("%llu\n",s_infi);
		//ans = s_infi / m;
		//printf("%llu\n",ans);*/
		s_infi = 2 * (p+m);
		printf("%llu\n",s_infi);
	}
	return 0;
}
