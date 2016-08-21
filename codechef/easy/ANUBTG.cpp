#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,a[1010],size,sum,j;
    cin >> test;
    while(test--)
    {
        cin >> size;
        for(int i = 0;i < size;i++)
        {
            cin >> a[i];
        }
        sort(a,a+size);
        if(size == 1)
        {
            cout << a[0] << endl;
        }
        else
        {
          sum = 0;
          j = size-1;
          while(j > 0)
          {
              sum = sum + a[j]+a[j-1];
              j-=4;
          }
          if(size % 4 == 1)
          {
              sum = sum + a[0];
          }
          cout << sum << endl;
        }
    }
    return 0;
}
