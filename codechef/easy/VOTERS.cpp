#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3,count = 0,k,a[100001];
    cin >> n1 >> n2 >> n3;
    int size = n1+n2+n3;

    for(int i = 0;i < size;i++)
    {
        a[i] = 0;
    }
    for(int i = 0;i < size;i++)
    {
        cin >> k;
        a[k]++;
    }
  // using hashmap of 100001
    for(int i = 0;i < 100001;i++)
    {
        if(a[i] > 1)
        {
          count++;
        }
    }

    cout << count << endl;
    for(int i = 0;i < 100001;i++)
    {
        if(a[i] > 1)
        {
          cout << i << endl;
        }
    }
    return 0;
}
