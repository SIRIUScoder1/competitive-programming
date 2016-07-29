//codechef
//karan
//cooking machine 

#include<bits/stdc++.h>
#define ULL unsigned long long int
using namespace std;

int main()
{
	ULL test,num1,num2,count;
	cin >> test;
	while(test--)
	{
		cin >> num1 >> num2;count = 0;
		while(num1 != num2)
		{
			if(num1 > num2)
			{
				num1 = num1/2;count++;
			}
			else
			{
				num2 = num2/2;count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
