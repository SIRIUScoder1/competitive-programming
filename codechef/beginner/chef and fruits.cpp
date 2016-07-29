//codechef
//karan
//chef and fruits

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,k,m,n,diff;
	cin >> test;
	while(test--)
	{
		cin >> n >> m >> k;
		diff = abs(n - m);
		//cout << diff << endl;		//3 
		while(diff != 0)
		{
			diff--;k--;
			if(k == 0)
			{
				break;
			}
		}
		cout << diff << endl;
	}
	return 0;
}
