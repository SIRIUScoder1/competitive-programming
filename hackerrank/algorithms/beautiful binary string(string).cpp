//karan
//hackerrank
//beautiful binary  string

#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[100];
	int n,count = 0;
	cin >> n;
	scanf("%s",a);
	for(int i = 0;i < n-2;i++)
	{
		if(a[i] == '0' && a[i+1] == '1' && a[i+2] == '0')
		{
			count++;
			a[i+2] = '1';
		}
	}
	cout << count << endl;
	return 0;
}
