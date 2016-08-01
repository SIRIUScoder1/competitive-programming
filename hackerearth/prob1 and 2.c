// finding the number of traiiling zeroes 
// basically the zeroes will be caused due to 5 and the multiplication of an even number
// but as we exceed 25 we get extra five and similar is the case with 125 and so on 
/*
#include<stdio.h>
int main()
{
	int x,i,count = 0;
	scanf("%d",&x);
	i = 5;
	while((x/i) >= 1)
	{
		count = count +(x/i);
		i = i * 5;
	}
	printf("%d",count);
	return 0;
}
*/
//--------------------------------------
// my prime 
#include<stdio.h>
int main()
{
	unsigned long long int s[1000];
	int i,n,element,j,l,count = 0;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%llu",&s[i]);
	}
	for(j = 0;j < n;j++)
	{
		element = s[j];
		for(l = 0;l < n;l++)
		{
			if(element == s[l])
			{
				count++;
			}
			else if((element % s[l]) != 0)
			{
				count++;
			}
			//printf("%d",count);
		}
		if(count == n)
		{
			printf("%llu ",s[j]);
		}
		count = 0;
	}
	return 0;
	
}
