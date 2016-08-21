#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,a[2001],count;
    while(true)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        else
        {
            for(int i = 0;i < n;i++)
            {
                cin >> a[i];
            }
            sort(a,a+n);
            count  = 0;

            //O(N^2) logic
            //O(N^3) LOGIC CAUSES TLE
            for(int i = (n-1);i >= 2;i--)
            {
                int j = i-1;
                int k = 0;
                while(k < j)
                {
                    if(a[k]+ a[j] < a[i])
                    {
                        count = count + (j-k);
                        k++;
                    }
                    else
                    {
                        j--;
                    }
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
