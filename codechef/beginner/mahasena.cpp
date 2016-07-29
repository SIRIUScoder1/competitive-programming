//codechef
//karan
//mahasena

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size,y,count1 = 0,count2 = 0;
	cin >> size;
	for(int i = 0;i < size;i++)
	{
		cin >> y;
		if(y % 2 == 0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	if(count1 > count2)
	{
		cout << "READY FOR BATTLE" << endl;
	}
	else
	{
		cout << "NOT READY" << endl;
	}
	return 0;
}
