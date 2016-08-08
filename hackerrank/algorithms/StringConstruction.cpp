//SIRIUScoder
//StringConstruction
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,a[27],count;
    char b[100000];
    cin >> test;
    while(test--)
    {
        scanf("%s",b);
        count = 0;
        for(int i = 0;i < 27;i++)
        {
            a[i] = 0;
        }

        // cout << strlen(b) << endl;
        for(int i = 0;i < strlen(b);i++)
        {
            if(a[(b[i] - 'a')] != 1)
            {
                count++;
                // cout << count << endl;
                a[b[i] - 'a'] = 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}
