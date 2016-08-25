//jumping the clouds
//karan

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,k,a[100],count = 0,i;
	cin >> num >> k;
	for(i = 0;i < num;i++)
	{
		cin >> a[i];
	}
	i = 0;
	if(a[i] == 1)
	{
		count += 2;
	}
	i = (i + k) % num;
	count++;
	while(i != 0)
	{
		if(a[i] == 1)
		{
			count+=2;
		}
		i = (i + k) % num;
		count++;
	}
	cout << 100 - count << endl;
	return 0;
}
