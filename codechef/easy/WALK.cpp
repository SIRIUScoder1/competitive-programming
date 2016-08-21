#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,a[100000],size,max;
    cin >> test;
    while(test--)
    {
        cin >> size;
        max = 0;
        for(int i = 0;i < size;i++)
        {
            cin >> a[i];
            if(a[i]+i >= max)
            {
                max = a[i]+i;
            }
        }
        cout << max << endl;
    }
    return 0;
}
