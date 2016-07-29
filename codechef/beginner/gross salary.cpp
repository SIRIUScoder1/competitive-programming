//codechef
//karan
//gross salary 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,sal;
	cin >> test;
	while(test--)
	{
		cin >> sal;
		if(sal < 1500)
		{
			cout << sal + sal * 0.1+sal * 0.9 << endl;
		}
		else
		{
			cout << sal + 500 + sal * 0.98 << endl;
		}
	}
	return 0;
}
