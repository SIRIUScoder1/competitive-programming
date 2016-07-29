//codechef
//karan
//second largest
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,a[4];
	cin >> test;
	while(test--)
	{
		for(int i=0;i<3;i++)
		{
			cin >>a[i];
		}
		sort(a,a+3);
		cout << a[1] << endl;
	}
	return 0;
}
