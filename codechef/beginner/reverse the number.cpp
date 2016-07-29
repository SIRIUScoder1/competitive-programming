//codechef
//karan
//reverse the number
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,i,reverse,num;
	cin >> test;
	while(test--)
	{
		cin >> num;reverse = 0;
		while(num!= 0)
		{
			reverse = reverse * 10;
			reverse = reverse + num % 10;
			num = num / 10;
		}
		cout << reverse << endl;
	}
	return 0;
}
