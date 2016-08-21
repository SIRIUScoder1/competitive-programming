#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,num;
    cin >> test;
    while(test--)
    {
        cin >> num;
        if(360 % num == 0)
        {
            cout << "y" << " ";
        }
        else
        {
          cout << "n" << " ";
        }
        if(num <= 360)
        {
            cout << "y" << " ";
        }
        else
        {
            cout << "n" << " ";
        }
        if((num)*(num+1)/2 <= 360)
        {
            cout << "y" << " ";
        }
        else
        {
            cout << "n" << " ";
        }
        cout << endl;
    }
    return 0;
}
