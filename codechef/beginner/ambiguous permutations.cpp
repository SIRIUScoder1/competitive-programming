//codechef
//karan
//ambiguous permutations
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100000],b[100000],size,i,j,flag;
	while(1)
	{
		cin >> size;flag = 0;
		if(size == 0)
		{
			return 0;
		}
		for(i = 1;i <= size;i++)
		{
			cin >> a[i];
			b[a[i]] = i;
		}
		for(j = 1;j <= size;j++)
		{
			if(a[j] != b[j])
			{
				cout << "not ambiguous" << endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			cout << "ambiguous" << endl;
		}
	}
	return 0;
}
