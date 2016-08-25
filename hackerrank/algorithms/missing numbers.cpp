//karan
//hackerrank
//missing numbers

#include<bits/stdc++.h>
#define ULL unsigned long long int

using namespace std;

int main()
{
	ULL size1,x,i,size2;
	ULL a[10000] ={0},b[10000] = {0};
	cin >> size1;
	for(i = 0;i < size1;i++)
	{
		cin >> x;
		a[x]++;
	}
	cin >> size2;
	for(i = 0;i < size2;i++)
	{
		cin >> x;
		b[x]++;
	}
	for(i = 0;i < 10000;i++)
	{
		if(a[i] != b[i])
		{
			cout << i << " ";
		}
	}
	return 0;	
}
