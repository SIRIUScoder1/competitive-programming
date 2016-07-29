//SIRIUScoder
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int size,a[100000],count = 0;
	cin >> size;
	for(int i = 0;i < size;i++)
	{
		cin >> a[i];
	}
	sort(a,a+size);
	long int k = a[size-1];
	for(int i = 0;i < size;i++)
	{
		if(k == a[i])
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
