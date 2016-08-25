//karan
//hackerrank
//divisible sum pairs

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size,k,a[110],count = 0;
	cin >> size >> k;
	for(int i = 0;i < size;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i < size-1;i++)
	{
		for(int j = i+1;j < size;j++)
		{
			if((a[i]+a[j])%k == 0)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
