//codechef
//karan
//enormous input
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,num,count = 0;
	cin >> n >> k;
	while(n--)
	{
		cin >> num;
		if(num % k == 0)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
