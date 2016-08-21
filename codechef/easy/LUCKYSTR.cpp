#include <bits/stdc++.h>
using namespace std;
/*
function to check for one string is substring of another
*/


// int check(string a,string b)
// {
//     int len1 = a.size();
//     int len2 = b.size();
//     int curr = 0;
//     for(int i = 0;i < len2;curr < len1;i++)
//     {
//         if(a[curr] == b[i])
//         {
//             curr++;
//         }
//     }
//     if(curr == len1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
int main()
{
    int k,n,u,flag;
    string a[100],b;
    cin >> k >> n;
    for(int i = 0;i < k;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++)
    {
        cin >> b;
        if(b.size() < 47)
        {
                flag = 0;
                for(int i = 0;i < k;i++)
                {
                    if(b.find(a[i]) != -1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1)
                {
                    cout << "Good" << endl;
                }
                else if(flag == 0)
                {
                    cout << "Bad" << endl;
                }
          }
          else
          {
              cout << "Good" << endl;
          }
      }
    return 0;
}
