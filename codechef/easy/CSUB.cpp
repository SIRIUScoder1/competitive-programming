#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test,count;
    string s;
    cin >> test;
    while(test--)
    {
        int size;
        cin >> size;
        cin >> s;
        count = 0;
        for(int i = 0;i < size;i++)
        {
            if(s[i] == '1')
            {
                count++;
            }
        }
        cout << (count)*(count+1)/2 << endl;
    }
    return 0;
}
