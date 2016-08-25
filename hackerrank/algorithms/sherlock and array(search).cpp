//sherlock and array
//karan 
//hackerrank

#include<bits/stdc++.h>
#define ULL unsigned long long int 
using namespace std;

int main()
{
	ULL test,size,a[100000],sum,left,flag;
	cin >> test;
	while(test--)
	{
		cin >> size;
		sum = 0;
		for(int i =0;i < size;i++)
		{
			cin >> a[i];
			sum = sum + a[i];
		}
		if(size == 1)
		{
			cout << "YES" << endl;
		}
		else if(size == 2)
		{
			cout << "NO" << endl;
		}
		else
		{
			left = 0;flag = 0;
			for(int j = 0;j < size;j++)
			{
				sum = sum - a[j];
				if(j > 0)
				{
					left = left + a[j-1];
				}
				if(sum == left)
				{
					flag = 1;
				}				
			}
			if(flag == 0)
			{
				cout << "NO" << endl;
			}
			else
			{
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}


