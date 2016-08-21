#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test,b[1010],size,count;
  char a[1010];
  cin >> test;
  while(test--)
  {
      cin >> size;
      scanf("%s",a);
      for(int i = 0;i <= 1010;i++)
      {
          b[i] = 0;
      }
      if(size == 1 && a[0] == '0')
      {
          cout << "1" << endl;
      }
      else if(size == 1 && a[0] == '1')
      {
          cout << "0" << endl;
      }
      else
      {
        for(int i = 0;i < size;i++)
        {
            if(i == 0 && a[i] == '1')
            {
                  b[i] = 1;
                  b[i+1] = 1;
            }
            else if(i == size-1 && a[i] == '1')
            {
                b[i] = 1;
                b[i-1] = 1;
            }
            else if(a[i] == '1')
            {
              b[i] = 1;
              b[i+1] = 1;
              b[i-1] = 1;
            }
          }
          count = 0;
          for(int i = 0;i < size;i++)
          {
              if(b[i] == 0)
              {
                  count++;
              }
          }
            cout << count << endl;
        }
  }
  return 0;
}
