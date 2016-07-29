//codechef
//karan
//the smallest pair 
#include<bits/stdc++.h>
#define LL long long int 
using namespace std;

int main()
{
	LL test,size,a[100000];
	cin >> test;
	while(test--)
	{
		cin >> size;
		for(int i = 0;i < size;i++)
		{
			cin >> a[i];
		}
		sort(a,a+size);
		cout << a[0]+a[1] << endl;
	}
	return 0;
}
