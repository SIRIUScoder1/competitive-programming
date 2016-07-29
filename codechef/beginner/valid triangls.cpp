//codechef
//karan
//valid triangles

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,x,y,z,count;
	cin >> test;
	while(test--)
	{
		cin >> x >> y >> z;
		if(x+y+z == 180 && x > 0&&y >0 && z>0)
		{
			cout << "YES"<< endl;
		}
		else
		{
			cout << "NO" << endl;
		}	
	}
	return 0;
}
