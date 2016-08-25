//karan 
//hackerrank
//fair rations

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size,a[1000],count=0,flag = 0;
	cin >> size;
	for(int i = 0;i < size;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i < size-1;i++)
	{
		if(a[i] % 2 != 0)
		{
			a[i]++;
			a[i+1]++;
			count+=2;
		}
	}
	for(int i = 0;i < size;i++)
	{
		if(a[i] % 2 != 0)
		{
			cout << "NO" << endl;
			flag = 1;
		}
	}
	if(flag == 0)
	{
		cout << count << endl;
	}
	return 0;
}
