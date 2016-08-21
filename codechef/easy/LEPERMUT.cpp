#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,size,a[101],count1,count2;
    cin >> test;
    while(test--)
    {
        cin >> size;
        for(int i = 0;i < size;i++)
        {
            cin >> a[i];
        }
        count1 = 0;
        for(int i = 0;i < size;i++)
        {
            for(int j = i+1;j < size;j++)
            {
              if(a[i] > a[j])
              {
                  count1++;
              }
            }
        }
        count2 = 0;
        for(int i = 0;i < size-1;i++)
        {
            if(a[i] > a[i+1])
            {
                count2++;
            }
        }
        if(count1 == count2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
