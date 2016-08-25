//karan 
//hackerrank
//ice cream parlor

#include<bits/stdc++.h>
#define ULL unsigned long long int 

using namespace std;

int main()
{
	ULL test,size,flag,m,x,a[100000];
//	vector<int> vec;		//dynamic array
	cin >> test;
	while(test--)
	{
		cin >> m;
		cin >> size;
		for(int i = 0;i < size;i++)
		{
			cin >> a[i];
//			vec.push_back(x);
		}
		flag = 0;
		for(int i = 0;i < size-1;i++)
		{
			for(int j = i+1;j < size;j++)
			{
				if(a[i] + a[j] == m)
				{
					cout << i+1 << " " << j+1 << endl;
					flag = 1;
					break;
				}
			}
			if(flag == 1)
			{
				break;
			}
		}
	}
	return 0;
}
