#include<bits/stdc++.h>
#define ULL unsigned long long int 
using namespace std;

int main()
{
	int n,k,sum = 0,temp;
	cin >> n >> k;
	int a[100000];
//	vector <int> a(k);
	for(int i = 0;i < 100000;i++)
	{
		a[i] = 0;
	} 
	for(int i = 0;i < n;i++)
	{
		cin >> temp;
		a[temp%k]++;
	}
//	for(int j = 0;j < n;j++)
//	{
//		cout << a[j] << " ";
//	}
	int count = 0;
	for(int i = 0;i <= (k/2);i++)
	{
		if(i == 0 || (2*i == k))
		{
			if(a[i])
			{
				count++;
			}
		}
		else
		{
			count =count+max(a[i],a[k-i]);
		}
	}
	cout << count << endl;
	return 0;
}
