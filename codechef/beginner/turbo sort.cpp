//codechef
//turbo sort 
//karan
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i, size,a[1000000];
	cin >> size;
	for(i = 0;i <size;i++)
	{
		cin >> a[i];
	}
	sort(a,a+size);
	for(i = 0;i < size;i++)
	{
		cout << a[i]<< endl;
	}
	return 0;
}
