// ap or not//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void merge(unsigned long long int a[],unsigned long long int l,unsigned long long int r,unsigned long long int mid)
{
	unsigned long long int i, j,k;
	unsigned long long int n1 = mid - l + 1;
	unsigned long long int n2 = r - mid;
	unsigned long long int L[n1],R[n2];
	for(i = 0;i < n1;i++)
	{
		L[i] = a[l + i];
	}
	for(j = 0;j < n2;j++)
	{
		R[j] = a[mid + j + 1];
	}
	i = 0;j = 0;k = l;
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
			k++;
		}
		else 
		{
			a[k] = R[j];
			j++;
			k++;
		}
	}
	while(i < n1)
	{
		a[k] = L[i];
		i++;
		k++;
	}
	while(j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}
void mergesort(unsigned long long int a[],unsigned long long int l,unsigned long long int r)
{
	if(l < r)
	{
		int mid = l + (r - l)/ 2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,r,mid);
	}
}
void printarray(unsigned long long int a[], unsigned long long int size)
{
	unsigned long long int i;
	for(i = 0;i < size;i++)
	{
		printf("%llu ",a[i]);
	}
}
int main()
{
	unsigned long long int test,a[10000],n,i,j,flag,d1,d2;
	scanf("%llu",&test);
	for(i = 0;i <test;i++)
	{
		scanf("%llu",&n);
		for(j = 0;j < n;j++)
		{
			scanf("%llu",&a[j]);
		}
		mergesort(a,0,n-1);
		flag = 1;
		//printarray(a,n);
		d1 = a[1] - a[0];
		for(j = 2;j < n;j++)
		{
			d2 = a[j] - a[j-1];
			if(d1 != d2)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 0)
		{
			printf("NO\n");
		}
		else 
		{
			printf("YES\n");
		}	
	}
	return 0;
}

