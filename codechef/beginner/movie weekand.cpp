//codechef
//karan
//movie weekand 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,l[101],r[101],k[101],maximum,pos,size;
	cin >> test;
	while(test--)
	{
		cin >> size;
		for(int i = 0;i < size;i++)
		{
			cin >> l[i];
		}
		for(int i = 0;i < size;i++)
		{
			cin >> r[i];
		}
		maximum = l[0]*r[0];pos = 0;
		for(int i = 1;i < size;i++)
		{
			if(l[i]*r[i] > maximum)
			{
				max = l[i]*r[i];
				pos = i;
			}
			else if(l[i]*r[i] == maximum)
			{
				if(r[i] > r[pos])
				{
					pos = i;
				}
			}
		}
		cout << pos+1 << endl;
	}
	return 0;
}
