#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int count,num,d,a[100000],i,k;
    cin >> num >> d;
    for(int i = 0;i < num;i++)
    {
        cin >> a[i];
    }

    sort(a,a+num);
    i = 0;count = 0;
    while(i < num-1)
    {
        k = abs(a[i]-a[i+1]);
        //cout << k << endl;
        if(k <= d)
        {
            count++;
            i+=2;
        }
        else
        {
          i++;
        }
    }
    cout << count << endl;
    return 0;
}
