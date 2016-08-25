//karan 
//hackerrank
//beautiful triplets

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size,d,a[100000];
	cin >> size >> d;
	for(int i = 0;i < size;i++)
	{
		cin >> a[i];
	}
	int count = 0;
	for(int i = 0;i < size;i++)
	{
		for(int j = i+1;j < size;j++)
		{
			if(a[j] - a[i] == d)
			{
				for(int m = j+1;m < size;m++)
				{
					if(a[m]-a[j] == d)
					{
						count++;
					}
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
