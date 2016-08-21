#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100000],b[100000];
    int len1,len2,test,size1,size2,j,i;
    cin >> test;
    while(test--)
    {
        scanf("%s",a);
        scanf("%s",b);
        // printf("%s %s",a,b);
        len1 = strlen(a);
        len2 = strlen(b);

        size1 = max(len1,len2);
        size2 = min(len1,len2);

        j = 0;
        for(i = 0;i < size1 && j < size2;i++)
        {
            if(len1 <= len2)
            {
                if(a[j] == b[i])
                {
                    j++;
                }
            }
            else if(len1 > len2)
            {
                if(a[i] == b[j])
                {
                    j++;
                }
            }
        }
        if(j == size2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
