#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size,a[1010],b[1010];

    cin >> size;

    for(int i = 1;i <= size;i++)
    {
        cin >> a[i];
    }
    for(int i = 1;i <= size;i++)
    {
        b[i] = 0;
    }
     vector <vector<int> > vec;
    vector <int> temp;
     int  count = 0,k;
     for(int j = 1;j <= size;j++)
     {
        if(b[j] != 1)
        {

          b[j] = 1;
          temp.push_back(j);
          k = a[j];
          while(true)
          {
              if(b[k] == 1)
              {
                 temp.push_back(k);
                 break;
              }
              else if(b[k] != 1)
              {
                  temp.push_back(k);
                  b[k] = 1;
                  k = a[k];
              }
          }
          count++;
          vec.push_back(temp);
          temp.clear();
         }
     }
     cout << count << endl;
     for(int i = 0;i < vec.size();i++)
     {
       for(int l = 0;l < vec[i].size();l++)
       {
          cout << vec[i][l] << " ";
       }
       cout << endl;
     }
    return 0;
}
