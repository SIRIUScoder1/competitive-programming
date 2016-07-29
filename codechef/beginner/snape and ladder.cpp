//codechef
//karan
//snape and ladder

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	float min,max,side1,side2;
	cin >> test;
	
	while(test--)
	{
		cin >> side1 >> side2;
		max = sqrt(pow(side1,2) + pow(side2,2));
		if(side1 >= side2)
		{
			min = sqrt(pow(side1,2)-pow(side2,2));
		}
		else
		{
			min = sqrt(pow(side2,2)-pow(side1,2));
		}
		cout << min << " " << max;
		cout << endl;
	}
	return 0;
}
