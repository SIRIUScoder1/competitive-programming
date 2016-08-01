//inverse list 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>		//position of integer(i) is the i'th number in the given list
#include<math.h>
int main()
{
	unsigned long long int test,i,num,a[100000],b[100000];
	scanf("%llu",&test);
	while(test--)
	{
		int num;scanf("%llu",&num);
		for(i = 1;i <= num;i++)
		{
			scanf("%llu",&a[i]);	//index array
		}
		for(i = 1;i <= num;i++)
		{
			b[a[i]] = i;
		}
		for(i = 1;i <= num;i++)
		{
			if(a[i] != b[i])
			{
				break;
			}
		}
		
		if(i == num+1)
		{
			printf("inverse\n");
		}
		else 
		{
			printf("not inverse\n");
		}
		
	}
	return 0;	
}
