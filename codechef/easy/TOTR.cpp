  #include <bits/stdc++.h>
  using namespace std;

  int main()
  {
      int test,m,k ;
      char a[110],b[110];
      string s1 = "abcdefghijklmnopqrstuvwxyz";
      string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      cin >> test;
      scanf("%s",a);
      while(test--)
      {
          scanf("%s",b);
          for(int i = 0;i < strlen(b);i++)
          {
              if(b[i] >= 'A' && b[i] <= 'Z')
              {
                for(int j = 0;j < s2.size();j++)
                {
                    if(b[i] == s2[j])
                    {
                        cout << (char)(a[j]-32);
                    }
                }
              }
              else if(b[i] >= 'a' && b[i] <= 'z')
              {
                for(int j = 0;j < s1.size();j++)
                {
                    if(b[i] == s1[j])
                    {
                        cout << a[j];
                    }
                }
              }
              else if(b[i] == '_')
              {
                  cout << " ";
              }
              else
              {
                  cout << b[i];
              }
          }
          cout << endl;
      }
      return 0;
  }
