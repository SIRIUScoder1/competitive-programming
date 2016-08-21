#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test,size,x;
    cin >> test;
    while(test--)
    {
        cin >> size;
        for(int i = 0;i < size;i++)
        {
            cin >> x;
        }
        cout << (size)*(size-1)/2 << endl;
    }
    return 0;
}
