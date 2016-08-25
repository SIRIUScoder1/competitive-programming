//hackerrank
//karan
//richie rich 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size,count;
	cin >> size >> count;
	char a[100000],b[100000];
	scanf("%s",a);
	for(int i = 0;i < size/2;i++)
	{
		if(a[i] != a[size-1-i])
		{
			if(a[i] < a[size-1-i])
			{
				a[i] = a[size-1-i];
			}
			else
			{
				a[size-1-i] = a[i];
			}
			count--;
			b[i] = 1;	
		}
		if(count < 0)
		{
			cout << "-1" << endl;
			return 0;
		}
	}
	for(int i = 0;i < size/2 && count > 0;i++)
	{
		if(a[i] != '9' && count >= 2-b[i])
		{
			a[i] = '9';
			a[size-1-i] = '9';
			count = count - 2 - b[i];
		}
	}
	if(count > 0 && size % 2 == 1)
	{
		a[size >> 1] = '9';
	}
	cout << a << endl;
	return 0;
}
