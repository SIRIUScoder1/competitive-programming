//codechef
//karan
//good joke!

//no matter whatever the combination will be at end he is asking the xor of the positions
// and xor operation gives same answer no matter what the permutation of the positions
//is...

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,x,y,k,size,i;
	cin >> test;
	while(test--)
	{
		cin >> size;
		for(i = 0;i < size;i++)
		{
			cin >> x >> y;
		}
		k = 0;
		for(i = 1;i <= size;i++)
		{
			k = k ^ i;
		}
		cout << k << endl;
	}
	return 0;
}
