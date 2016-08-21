//karan
//Carvans
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,count,a[100000],min,size;
    cin >> test;
    while(test--)
    {
        cin >> size;
        count = 1;
        for(int i = 0;i < size;i++)
        {
            cin >> a[i];
        }
        min = a[0];
        for(int i = 1;i < size;i++)
        {
            if(min > a[i])
            {
                count++;
                min = a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}
