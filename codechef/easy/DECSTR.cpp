#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,num,k;
    string s = "zyxwvutsrqponmlkjihgfedcba";
    cin >> test;
    while(test--)
    {
        cin >> num;
        if(num < 25)
        {
            for(int i = 25 - num;i < 26;i++)
            {
                cout << s[i];
            }
        }
        if(num % 25 == 0)
        {
            num = num / 25;
            for(int i = 0;i < num;i++)
            {
              cout << s;
            }
        }
        else if(num % 25 != 0 && num > 25)
        {
            k = num % 25;
            num = num / 25;
            for(int i = 25 - k;i < 26;i++)
            {
              cout << s[i];
            }
            for(int i= 0;i < num;i++)
            {
                cout << s;
            }
        }
        cout << endl;
    }
}
