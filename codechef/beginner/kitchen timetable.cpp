//kitchen timetable
//karan

#include<iostream>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,i,c=0;
        scanf("%lld",&n);
        long long int a[n+1],x;
        a[0]=0;
        for(i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&x);
            if(x<=(a[i]-a[i-1]))
                c++;
 
        }
        printf("%lld\n",c);
    }
    return 0;
}
