#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int query,n,l,x;
    cin >> n >> query;
    l = n + 2*n;
    while(query--)
    {
        cin >> x;

          if(x > n && x <= 2*n)
          {
              cout << x-n-1 << endl;
          }
          else if(x > 2*n && x <= l)
          {
              cout << l-x+1 << endl;
          }
          else
          {
              cout << "0" << endl;
          }
    }
    return 0;
}
