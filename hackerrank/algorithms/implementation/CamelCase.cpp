//SIRIUScoder
//CamelCase

#include <bits/stdc++>h>
using namespace std;

int main()
{
  int count = 1;
  char a[100000];
  scanf("%s",a);

  for(int i = 1;i < strlen(a);i++)
  {
      if(a[i] >= 'A' && a[i] <= 'Z')
      {
          count++;
      }
  }
  cout << count << endl;
  return 0;
}
