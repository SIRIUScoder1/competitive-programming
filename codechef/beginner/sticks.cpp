//codechef
//karan
//sticks 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int test,size,a[10000],count,prod,j;
	cin >> test;
	while(test--)
	{
		cin >> size;
		for(int i = 0;i < size;i++)
		{
			cin >> a[i];
		}
		sort(a,a+size);prod = 1;count = 0;
		for(j = (size-1);j>=0;j--)
		{
			if(a[j] == a[j-1])
			{
				prod = prod * a[j];
				j--;
				count++;
				if(count == 2)
				{
					break;
				}
			}
		}
		if(count == 2)
		{
			cout << prod << endl;
		}
		else 
		{
			cout << "-1" << endl;
		}
	}
	return 0;
}
