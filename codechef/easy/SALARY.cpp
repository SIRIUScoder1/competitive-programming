#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    long long int sum,x,size;
    cin >> test;
    while(test--)
    {
        int min = INT_MAX,sum = 0;
        cin >> size;
        for(int i = 0;i < size;i++)
        {
            cin >> x;
            if(x < min)
            {
                min = x;
            }
            sum = sum + x;
        }
        cout << sum -(size*min) << endl;
    }
    return 0;
}
