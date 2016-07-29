//codechef
//karan
//minimum maximum

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int test,a[100000],size,i,min;
	cin >> test;
	
	while(test--)
	{
		cin >> size;
		for(i = 0;i < size;i++)
		{
			cin >> a[i];
		}
		min = a[0];
		for(i = 1;i < size;i++)
		{
			if(min > a[i])
			{
				min = a[i];
			}
			//cout << min << " ";
		}
		//sort(a,a+size);
		cout << min*(size-1)<< endl;
	}
	return 0;
}

	
