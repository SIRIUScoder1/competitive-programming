//codechef
//karan
//sum of palindromic numbers


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,num1,num2,temp,a,b,i,reverse,sum;
	cin >> test;
	while(test--)
	{
		cin >> a >> b;sum = 0;
		for(i = a;i <= b;i++)
		{
			temp = i;reverse = 0;
			while(temp != 0)			//reverse a number logic
			{
				reverse = reverse * 10;
				reverse = reverse + temp % 10;
				temp = temp/ 10;
			}
			if(reverse == i)
			{
				sum = sum + reverse;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
