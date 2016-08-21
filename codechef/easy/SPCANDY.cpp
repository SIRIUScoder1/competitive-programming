#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,k,test;
    cin >> test;
    while(test--)
     {
        cin >> n >> k;
        if(k == 0)
        {
            cout << "0" << " " << n << endl;
        }
        else
        {
            cout << (n/k) << " " << (n%k) << endl;
        }
     }
     return 0;
}
