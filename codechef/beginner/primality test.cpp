//codechef
//karan
//primality test
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,num,i,flag;
	cin >> test;
	while(test--)
	{
		cin >> num;
		
		if(num == 2)
		{
			cout << "yes" << endl;
		}
		else
		{
			flag = 0;
			for(i = 2;i <= sqrt(num);i++)
			{
				if(num % i == 0)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 1)
			{
				cout << "no" << endl;
			}
			else 
			{
				cout << "yes" << endl;
			}
		}
	}
	return 0;
}
