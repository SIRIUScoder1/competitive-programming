#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,count;
    cin >> test;
    char str[100000];
    while(test--)
    {
        scanf("%s",str);
        count = 0;
        for(int i = 0;i < strlen(str);i++)
        {
            if(str[i] != '4' && str[i] != '7')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
