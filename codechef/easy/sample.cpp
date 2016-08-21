#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    int a[26]={0};
    cin >> s;


    //  O(N)
    //pratistha
    //p
    for(int i = 0;i < strlen(s);i++)
    {
        a[s[i]-'a']++;
    }


    for(int i = 0;i < 26;i++)
    {
        cout << char(97+i) << "----" << a[i] << endl;
    }
    return 0;
}
