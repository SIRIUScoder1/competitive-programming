#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,count=0,pagenum=1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        int flag=0;
        int problemnum=1;
        for(int j=0,l=1;j<t;j++,l++)
        {
            if(problemnum==pagenum)
            {
                count++;
//                cout<<count<<endl;
            }
            problemnum++;
            if(l==k)
            {
                l=0;
                pagenum++;
                if(j==t-1)
                    flag=1;
            }
        }
        if(flag==0)
            pagenum++;
    }
    cout<<count;
    return 0;
}
