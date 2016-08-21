/*
  longest inreasing subsequence  in the give array
  */

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;
  while(test--)
  {
        int a[100000],count,j,i;
        int size;
        cin >> size;
        for (i = 0;i < size;i++)
        {
            cin >> a[i];
        }
        i = 0;
        while(i < size)
        {
          count = 1;
          for(j = i+1;j < size;j++)
          {
              if((a[j] >= 0 && a[j-1] >= 0)||(a[j] < 0 && a[j-1] < 0))
              {
                  break;
              }
              else
              {
                  count++;
              }
          }
          while(i < j)
          {
              cout << count-- << " ";
              i++;
          }
      }
      cout << endl;
  }
  return 0;
}
