//SIRIUScoder
//strange counter
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int num = 3,time,t = 1;
    cin >> time;
    while(num + t - 1 < time)
    {
        t = num + t;
        //  cout << t << endl;
        num = num * 2;
        // cout << num << endl;
    }
    if(t == time)
    {
        cout << num << endl;
    }
    else
    {
      t = time - t;
      num = num - t;
      cout << num << endl;
    }
    return 0;
}
