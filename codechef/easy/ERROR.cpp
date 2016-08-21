#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    char a[100000];
    cin >> test;
    while(test--)
    {
      scanf("%s",a);
      if(strlen(a) < 3)
      {
          cout << "Bad" << endl;
      }
      else
      {
        for(int i = 0;i < strlen(a);i++)
        {
            if(a[i] == '0' && a[i+1] == '1' && a[i+2] == '0')
            {
              cout << "Good" << endl;
              break;
            }
            else if(a[i] == '1' && a[i+1] == '0' && a[i+2] == '1')
            {
              cout << "Good" << endl;
              break;
            }
            if(i > strlen(a)-3)
            {
                cout << "Bad" << endl;
                break;
            }
          }
      }
    }
    return 0;
}
