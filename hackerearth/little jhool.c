#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	unsigned long int n,a[1000],i,temp,j,u = 0,l,k,count = 0;
	scanf("%lu",&n);
	for(i = 0;i < n;i++)		// number of roses in the garden
	{
		scanf("%lu",&a[i]);
	}
	for(i = 0;i < n;i++)
	{
		for(j = i+1;j < n;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	/*for(i = 0;i < n;i++)
	{
		printf("%llu ",a[i]);
	}*/
	unsigned long int sum = 0;
	for(i = 0;i < n;i++)
	{
		sum = sum + a[i];
	}
	//printf("%lu ",sum);
	if(sum % 2 != 0)
	{
		printf("%lu",sum);
	}
	else{
	for(l = 0;l < n;l++)
	{
		k = sum - a[l];
		count++;
		if(k % 2 != 0)
		{
			printf("%lu ",k);
			break;
		}
		if(count == n)
		{
			printf(":(");
		}
	}
	}
	return 0;
}
