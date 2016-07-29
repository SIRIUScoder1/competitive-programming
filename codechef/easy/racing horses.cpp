//codechef
//karan
//racing horses

#include<bits/stdc++.h>
#define LL  long long int 
using namespace std;

int main()
{
	LL test,a[100000],j,size,min,k;
	cin >> test;
	while(test--)
	{
		cin >> size;
		for(j = 0;j < size;j++)
		{
			cin >> a[j];
		}
		sort(a,a+size);
		min = abs(a[0]-a[1]);
		//cout << min << endl;
		for(j = 1;j < (size-1);j++)
		{
			//cout << a[j] << " ";
			k = abs(a[j] - a[j+1]);
			if(min >= k)
			{
				min = k;
			}
		}
		cout << min << endl;
	}
	return 0;
}
