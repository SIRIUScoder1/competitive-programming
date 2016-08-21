#include <bits/stdc++.h>
using namespace std;

int checkprime(int x)
{
    if(x == 2)
    {
        return x;
    }
    else
    {
        int flag = 0;
        for(int i = 2;i < x;i++)
        {
            if(x % i == 0)
            {
              flag = 1;
              return 1;
              break;
            }
        }
        if(flag == 0)
        {
            return x;
        }
    }
}
int main()
{
    int test,i,k,sum,num1,num2;
    cin >> test;
    while(test--)
    {
        cin >> num1 >>num2;
        sum = num1 + num2;
        i = sum;
        while(true)
        {
            k = checkprime(i+1);
            if(k != 1)
            {
                break;
            }
            i++;
        }
        cout << k - sum << endl;
    }
    return 0;
}
