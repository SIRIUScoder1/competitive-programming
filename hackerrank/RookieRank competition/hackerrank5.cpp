//SIRIUScoder
//Antiprime numbers
#include<bits/stdc++.h>
#define ULL unsigned long long int
using namespace std;

int main()
{
	ULL test,x;
	vector <ULL> v = {1, 2, 4, 6, 12, 24, 36, 48, 60, 120, 180, 240, 360, 720, 840, 1260, 1680, 2520, 5040, 7560, 10080, 15120, 20160, 25200, 27720, 45360, 50400, 55440, 83160, 110880, 166320, 221760, 277200, 332640, 498960, 554400, 665280, 720720, 1081080, 1441440, 2162160,2882880,3603600,4324320,6486480,7207200,8648640,10810800};
	cin >> test;
	while(test--)
	{
		cin >> x;
		for(int i = 0;i < v.size();i++)
		{
			if(v[i] == x)
			{
				cout << x << endl;
				break;
			}
			else if(v[i] < x)
			{
				continue;
			}
			else if(v[i] > x)
			{
				cout << v[i] << endl;
				break;
			}
		}
	}
	return 0;
}
