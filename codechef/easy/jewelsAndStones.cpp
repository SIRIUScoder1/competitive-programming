#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>

using namespace std;

int main()
{
    int test,count;
    char a[101],b[101];
    cin >> test;
    while(test--)
    {
        scanf("%s",a);scanf("%s",b);count = 0;
        for(int i = 0;i < strlen(b);i++)
        {
            for(int j = 0;j < strlen(a);j++)
            {
                if(a[j] == b[i])
                {
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
  }
    return 0;
}

//hashmap concept if only lowercase string characters were given

// while(test--)
// {
//     scanf("%s",a);
//     scanf("%s",b);
//     sum = 0;
//     for(int i = 0;i < 26;i++)
//     {
//         c[i] = 0;
//     }
//     for(int i = 0;i < strlen(b);i++)
//     {
//         c[b[i]-'a']++;
//     }
//     for(int i = 0;i < strlen(a);i++)
//     {
//         sum += c[a[i]- 'a'];
//     }
//     cout << sum << endl;
// }
