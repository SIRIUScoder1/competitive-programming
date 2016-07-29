//codechef
//karan
//one more weird game
#include <iostream>
using namespace std;

int main()
{
  int test,n,m;
  cin >> test;
  //basically the coloring method doesnt matter
  //we have to just count the number of adjacent cells or one can say the edges of the graph
  //formulae given below
  while(test--)
  {
    cin >> n >> m;
    cout << (n)*(m-1)+(m)*(n-1) << endl;
  }
  return 0;
}
