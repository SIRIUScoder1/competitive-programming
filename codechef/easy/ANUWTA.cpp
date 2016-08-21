#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,test,k;
    cin >> test;
    while(test--)
    {
        cin >> num;
        k = num*(num+1)/2;
        cout << k+num << endl;
    }
    return 0;
}
