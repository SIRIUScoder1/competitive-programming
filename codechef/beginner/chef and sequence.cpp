//codechef
//karan
//chef and his sequence

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[1000],b[1000],size1,size2,pivot,j,count,flag,i;
	int test;
	cin >> test;
	while(test--)
	{
		cin >> size1;
		for(i =0;i < size1;i++)
		{
			cin >> a[i];
		}
		cin >> size2;
		for(i = 0;i < size2;i++)
		{
			cin >> b[i];
		}
		
		if(size2 > size1)
		{
			cout << "No" << endl;
		}
		else
		{
			pivot = 0;count = 0;flag = 0;
			for(j = 0;j < size1;j++)
			{
				if(a[j] == b[pivot])
				{
					count++;
					pivot++;
				}
				if(count == size2)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 1)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout<< "No" << endl;
			}
		}
	}
	return 0;
}
