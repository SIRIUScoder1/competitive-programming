//greedy puppy 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,n,k,max;
	cin >> test;
	while(test--)
	{
		cin >> n >> k;
		if(k == 1)
		{
			cout << "0" <<endl;
		}
		else
		{
			max = 0;
			for(int i = 2;i<= k;i++)
			{
				if(n%i > max)
				{
					max = n%i;
				}
				//cout << max << endl;
			}
			cout << max << endl;
		}
	}
	return 0;
}
