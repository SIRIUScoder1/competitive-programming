/*#include<stdio.h>
int main()
{
	unsigned long long int a[10000],l = 1,i,j,c,n,q,b;
	scanf("%llu",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%llu",&a[i]);
	}
	scanf("%llu",&q);
	for(c = 0;c < q;c++)
	{
		scanf("%llu",&b);
		l = l * b;
	}
	for(j = 0;j < n;j++)
	{
		a[j] = a[j] / l;
	}
	for(i = 0;i < n;i++)
	{
		printf("%llu ",a[i]);
	}
	return 0;
}*/
#include<stdio.h>
//division function 
void Divide(int *a,int size,int q) //*a poniter to the first array elemnt
{
int i;
for(i=0;i<size;i++){
a[i]=a[i]/q;

}
}
//main function
int main()
{
int i,n,q,c;
long long unsigned m=1;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
scanf("%d",&q);
/*if we keep dividing each time the runtime 
of program will be order of n^2 to make 
it order of divide by multiplication of totl no
of condition */
while(q--)
{
scanf("%d",&c);
m*=c;
}
if(m!=0)
{
//cal the method
Divide(arr,n,m);
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
else
{
for(i=0;i<n;i++)
{	
arr[i]=0;
printf("%d ",arr[i]);
}
}
return 0;
}

