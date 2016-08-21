//karan
///coinFLip
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test,g,n,q,i;
  cin >> test;
  while(test--)
  {
      cin >> g;    //number of games
      while(g--)
      {
          cin >> i >> n >> q;
          /*initial,number and the coin type number asked
          */
          if(n % 2 == 0)
          {
              cout << n/2 << endl;
          }
          else
          {
              if(i == 1 && q == 1)
              {
                  cout << n/2 << endl;
              }
              else if(i == 1 && q == 2)
              {
                  cout << (n/2) + 1 << endl;
              }
              else if(i == 2 && q == 1)
              {
                  cout << (n/2)+1 << endl;
              }
              else if(i == 2 && q == 2)
              {
                  cout << (n/2) << endl;
              }
          }
      }
  }
  return 0;
}
