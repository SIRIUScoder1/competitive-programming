#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,num,min,diff,m;
    cin >> test;
    while(test--)
    {
        cin >> num;
        min = INT_MAX;
        m = (int)sqrt(num);
        for(int i = 1;i <= m;i++)
        {
          if(num % i == 0)
          {
              diff = abs((num/i)-i);
              if(min >= diff)
              {
                min = diff;
              }
          }
        }
        cout << min << endl;
    }
    return 0;
}
