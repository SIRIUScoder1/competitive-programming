//codechef
//karan
//factorial

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int test,x,count,i;
	cin >> test;
	while(test--)
	{
		count = 0;
		cin >> x;
		i = 5;
		while((x/i) >= 1)
		{
			count = count +(x/i);
			i = i * 5;
		}
		cout << count << endl;
	}
	return 0;
}
