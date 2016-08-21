#include <bits/stdc++.h>
#define MOD 10000009
using namespace std;

int main()
{
    char a[1000000];
    long int test,sum,flag,flag1;
    cin >> test;
    while(test--)
    {
        scanf("%s",a);
        if(strlen(a) == 1)
        {
            if(a[0] == '?')
            {
                cout << "26" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
        else
        {
            sum = 1;flag = 0;flag1 = 0;
            if(strlen(a)%2 != 0 && a[strlen(a)/2] == '?')
            {
                sum = 26;
            }
            for(int i = 0;i < strlen(a)/2;i++)
            {
                if(a[i] == '?' && a[strlen(a)-1-i] == '?')
                {
                    flag1 = 1;
                    sum = (sum * 26)%MOD;
                }
                else if(a[i] >= 'a' && a[i] <= 'z' && a[strlen(a)-1-i] == '?')
                {
                    flag1 =1;
                    sum = (sum * 1)% MOD;
                }
                else if(a[strlen(a)-1-i] >= 'a' && a[strlen(a)-1-i] <= 'z' && a[i] == '?')
                {
                    flag1 = 1;
                    sum = (sum * 1)%MOD;
                }
                else if(a[i] != a[strlen(a)-1-i])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                cout << "0" << endl;
            }
            else if(flag1 == 0 && sum == 1)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << sum << endl;
            }
        }
    }
    return 0;
}
