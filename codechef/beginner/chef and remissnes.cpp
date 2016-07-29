#include <iostream>
using namespace std;
int main()
{
   int t;
   long int a,b,min=0;
   cin>>t;
   while(t--)
   {
       cin>>a>>b;
       if(a>b)
            min=a;
       else
            min=b;
       cout<<min<<" "<<a+b<<endl;
   }
    return 0;
} 
