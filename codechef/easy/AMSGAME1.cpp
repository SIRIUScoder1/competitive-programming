#include <bits/stdc++.h>
using namespace std;

int gcd(int a ,int b)
{
    if(b == 0)
    {
        return a;
    }
    gcd(b,a%b);
}

int main()
{
    int test,a[100000],size,k;
    cin >> test;
    while(test--)
    {
        cin >> size;
        for(int i = 0;i < size;i++)
        {
            cin >> a[i];
        }
        k = gcd(a[0],a[1]);
        for(int i = 2;i < size;i++)
        {
            k = gcd(k,a[i]);
        }
        cout << k << endl;
    }
    return 0;
}
