#include <bits/stdc++.h>
using namespace std;

int gcd (int x,int y)
{
    if(y == 0)
    {
        return x;
    }
    gcd(y,x%y);
}

int main()
{
    int hcf,a[100000],size,test;
    cin >> test;
    while(test--)
    {
        cin >> size;
        for(int i = 0;i < size;i++)
        {
            cin >> a[i];
        }
        hcf = a[0];
        for(int i = 1;i < size;i++)
        {
            hcf = gcd(hcf,a[i]);
            if(hcf == 1)
            {
                break;
            }
        }
        if(hcf == 1)
        {
            cout << size << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
