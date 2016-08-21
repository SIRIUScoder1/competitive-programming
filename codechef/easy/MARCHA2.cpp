#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int test,size,a[1000005],flag,k;
    cin >> test;
    while(test--)
    {
        cin >> size;
        for(int i = 0;i < size;i++)
        {
            cin >> a[i];
        }
        k = 1;flag = 0;
        for(int i = 0;i < size;i++)
        {
            if(k < a[i])
            {
                flag = 1;
                break;
            }
            k = k*2 - 2*a[i];
        }
        if(flag==1||k!=0)
        {
          cout << "No" << endl;
        }
        else
        {
          cout << "Yes" << endl;
        }
    }
    return 0;
}
