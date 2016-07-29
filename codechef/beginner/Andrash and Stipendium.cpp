//codechef
//karan
//andrash and stipendium

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test,x,size,sum,flag1,flag2;
  double k;
  cin >> test;
  while(test--)
  {
   		cin >> size;sum = 0;flag1 = 0;flag2 = 0;
	    for(int i = 0;i < size;i++)
	    {
	      cin >> x;
	      if(x == 2)
	      {
	        flag1 = 1;
	      }
	      if(x == 5)
	      {
	        flag2 = 1;
	      }
	      sum = sum + x;
	    }
	    k = (double)(sum)/size;
	    if(flag1 == 1)
	    {
	    	cout << "No" << endl;
		}
		else if(flag2 == 1 && k >= 4.0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
  }
  return 0;
}
