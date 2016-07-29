//codechef
//karan
//lucky four 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int test,num,count;
	cin >> test;
	while(test--)
	{
		cin >> num;count = 0;
		while(num != 0)
		{
			if(num % 10 == 4)
			{
				count++;
			}
			num = num / 10;
		}
		cout << count << endl;
	}
	return 0;
}
