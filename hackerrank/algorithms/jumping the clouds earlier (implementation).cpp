//hackerrank
//karan
//jumping the clouds

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size,a[1000];
	cin >> size;
	
	for(int i = 0;i < size;i++)
	{
		cin >> a[i];
	}
	int j = 0,count = 0;
	while(j != size-1)
	{
		if(a[j+2] == 0 && j+2 < size)
		{
			count++;
			j += 2;
		}
		else
		{
			count++;
			j++;
		}
	}
	cout << count << endl;
	return 0;
}
