#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,size,k,a[100000],sum1,sum2,l;
    cin >> test;
    while(test--)
    {
      cin >> size >> k;
      for(int i = 0;i < size;i++)
      {
          cin >> a[i];
      }
      sort(a,a+size);
      sum1 = 0;sum2 = 0;
      if(k <= size/2)
      {
          l = k;
      }
      else
      {
          l = size - k;
      }
      for(int i = 0;i < l;i++)
      {
          sum1 = sum1 + a[i];
      }
      for(int i = l;i < size;i++)
      {
          sum2 = sum2 + a[i];
      }
      cout << abs(sum1-sum2) << endl;
    }
    return 0;
}
