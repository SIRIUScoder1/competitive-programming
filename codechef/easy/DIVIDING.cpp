#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int size,k,sum = 0,x;
    cin >> size;
    k = ((size)*(size+1))/2;

    for(int i = 0; i < size;i++)
    {
        cin >> x;
        sum = sum + x;
    }
    if(sum == k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
