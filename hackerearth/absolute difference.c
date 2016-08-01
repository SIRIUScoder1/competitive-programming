#include<stdio.h>
void main()
{ int t,n,d,i,a[1000],flag;
scanf("%d",&t);
while(t--)
{
flag=1;
scanf("%d %d",&n,&d);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
if((a[i]-a[i-1])>d||(a[i-1]-a[i])>d)
{
flag=0;
break;
}
}
if(flag==1)
printf("YES\n");
else
printf("NO\n");
}
}
