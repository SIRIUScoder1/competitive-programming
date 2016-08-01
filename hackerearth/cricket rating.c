#include<stdio.h>
#include<limits.h>
int max(int a,int b){
	return(a>b)?a:b;
}
int max(int a,int b,int c)
{
	return max(max(a,b),c);
}
int maxCrossingSum(int a[],int l,int m,int h)
{
	int sum = 0;
	int left_sum = INT_MIN;
	int i;
	for(i = m;i >= l;i++)
	{
		sum = sum +a[i];
		if(sum > left_sum)
		{
			let_sum = sum;
		}
	}
	sum  =0;
	int right_sum = INT_MIN;
	for(i = m+1;i <= h;i++)
	{
		sum = sum + a[i];
		if(sum > righ_sum)
		{
			right_sum = sum
		}
	}
	return left_sum = sum + right_sum;
}
int maxSubArraySum(int a[],int l,int h)
{
	if(l == h)
		return a[l];
	int m = (l+h)/2;
	return max(maxSubArraySum(a,l,m),maxSubarray(a,m+1,h),maxCrossingSum(a,l,m,h));
}
int main()
{
	int size,a[100000],i;
	scanf("%d",&size);
	for(i = 0;i < size;i++)
	{
		scanf("%d",a[i]);
	}
	int max_sum = maxSubArraySum(a,0,size-1);
	printf("%d",max_sum);
	return 0;
}
