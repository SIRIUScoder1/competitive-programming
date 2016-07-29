//codechef
//karan
//cops and the thief devu 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,a[15],first[15],end[15],size,x,y,i,j,k,sum,max;
	cin >> test;
	
	while(test--)
	{
		cin >> size >> x >> y;
		for(i = 0;i < size;i++)
		{
			cin >> a[i];
		}
		sort(a,a+size);
		k = x*y;
		for(i = 0;i < size;i++)
		{
			first[i] = a[i] - k;
			if(first[i] <= 0)
			{
				first[i] = 1;
			}
		}
		for(i = 0;i < size;i++)
		{
			end[i] = a[i] + k;
			if(end[i] > 100)
			{
				end[i] = 100;
			}
		}
		sum = first[0] - 1;
		for(i = 1;i < size;i++)
		{
			max = first[i] - end[i-1]-1;
			if (max < 0)
			{
				continue;
			}
			else 
			{
				sum = sum + max;
			}
			//cout << sum  << " ";
		}
		sum = sum + (100-end[size-1]);
		cout << sum << endl;
	}
	return 0;
}
