//karan
//uncleJohny
#include <bits/stdc++.h>
#define LL long long int
using namespace std;

LL BinarySearch(LL a[],LL first,LL last,LL x)
{
    while(first <= last)
    {
        LL mid = first + (last - first)/2;
        if(a[mid] == x)
        {
            return mid+1;
        }
        else if(a[mid] > x)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
}
int main()
{
  LL test,size,a[101],x,k,m;
  cin >> test;
  while(test--)
  {
      cin >> size;
      for(int i = 0;i < size;i++)
      {
          cin >> a[i];
      }
      cin >> x;   //index input
      m = a[x-1];
      sort(a,a+size);
      k = BinarySearch(a,0,size-1,m);
      cout << k << endl;
  }
  return 0;
}
