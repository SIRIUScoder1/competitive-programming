//atm
//codechef
//karan
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	double y,g;				// money to draw and the money in the bank
	cin >> x >> y;
	if(x % 5 == 0 && x+.50 <= y)
	{
		g = (y - x - .5);
		printf("%.2f",g);
	}
	else 
	{
		printf("%.2f",y);
	}
	return 0;
}
