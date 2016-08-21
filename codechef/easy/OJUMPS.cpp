#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int num,k;
    cin >> num;
    k = num % 6;
    if(k  == 0 || k == 1 || k == 3)
    {
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}
