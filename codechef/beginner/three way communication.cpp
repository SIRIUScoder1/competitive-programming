//codechef
//karan
//three way communication
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,a[3][2],count,row,col,dist;
	cin >> test;
	while(test--)
	{
		cin >> dist;count = 0;
		for(row = 0;row < 3;row++)
		{
			for(col = 0;col < 2;col++)
			{
				cin >> a[row][col];
			}
		}
		if((pow((a[0][0] - a[1][0]),2)+pow((a[0][1] - a[1][1]) ,2)) <= dist*dist)
		{
			count++;
		}
		if((pow((a[1][0] - a[2][0]),2)+pow((a[1][1]-a[2][1]) ,2)) <= dist*dist)
		{
			count++;
		}
		if((pow((a[2][0] - a[0][0]),2)+pow((a[2][1]-a[0][1]) ,2)) <= dist*dist)
		{
			count++;
		}
		if(count >= 2)
		{
			cout << "yes" << endl;
		}
		else if (count < 2)
		{
			cout << "no"<< endl;
		}
	}
	return 0;
}
