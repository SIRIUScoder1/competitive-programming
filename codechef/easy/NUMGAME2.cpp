#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int test,num;
    cin >> test;
    while(test--)
    {
        cin >> num;
        if(num % 4 == 1)
        {
            cout << "ALICE" << endl;
        }
        else
        {
          cout << "BOB" << endl;
        }
    }
    return 0;
}
