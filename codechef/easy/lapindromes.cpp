#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int test,k,length,flag;
    cin >> test;

    int a[27];
    char b[2000];
    while(test--)
    {
        for(int i = 0;i < 26;i++)
        {
            a[i] = 0;
        }
        scanf("%s",b);
        length = strlen(b);

        for(int i = 0;i < length/2;i++)
        {
            a[b[i] - 'a']++;
        }

        if(length % 2 == 0)
        {
            k = length/2;
        }
        else
        {
            k = (length/2)+1;
        }

        for(int i = k;i < length;i++)
        {
            a[b[i]-'a']--;
        }
        flag = 0;
        for(int i = 0;i < 26;i++)
        {
            if(a[i] != 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
