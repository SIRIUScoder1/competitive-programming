#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test,x,a[100001],size,count;
  cin >> test;
  while(test--)
  {
      cin >> size;
      count = 0;
      for(int i = 1;i <= 100000;i++)
      {
          a[i] = 0;
      }
      for(int i = 0;i < size;i++)
      {
          cin >> x;
          a[x]++;
      }
      for(int i = 1;i <= 100000;i++)
      {
          if(a[i] > 0)
          {
              count++;
          }
      }
      cout << count << endl;
  }
  return 0;
}
