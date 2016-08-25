//SIRIUScoder
//hackerrack
//circular array rotation

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,m,a[100000];
	cin >> n >> k >> m;

	for(int i = 0;i < n;i++)
	{
		cin >> a[(i+k)%n];
	}

//	for(int i = 0;i < n;i++)
//	{
//		cout << a[i] << " ";
//	}
	
	while(m--)
	{
		int l;
		cin >> l;
		cout << a[l] << endl;
	} 
	
	return 0;
}
