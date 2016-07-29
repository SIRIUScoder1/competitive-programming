//codechef
//karan
//first and last digit

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int test,k,m;
	string s;
	cin >> test;
	while(test--)
	{
		cin >> s;
		k = s[0] - '0';
		m = s[s.size()-1]-'0';
		cout << k+m << endl;
	}
	return 0;
}
