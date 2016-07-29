//codechef
//karan
//chef and subarray 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int test,size,a[100000];
	cin >> test;
	while(test--)
	{
		cin >> size;
		for(int i = 0;i < size;i++)
		{
			cin >> a[i];
		}
		long int count = 0;
		for(int i = 0;i < size;i++)
		{
			long int sum = 0,prod =1;
			for(int j = i;j < size;j++)
			{
				sum = sum + a[j];
				prod = prod * a[j];
				if(sum == prod)
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
