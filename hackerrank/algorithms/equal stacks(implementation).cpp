//karan
//hackerrank
//equal stacks (implementation)

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100000],b[100000],c[100000],n1,n2,n3,sum1 = 0,sum2 =0,sum3 = 0;
	cin >> n1 >> n2 >> n3;
	for(int i = 0;i < n1;i++)
	{
		cin >> a[i];
		sum1+= a[i];
	}
	for(int i =0;i < n2;i++)
	{
		cin >> b[i];
		sum2+= b[i];
	}
	for(int i = 0;i < n3;i++)
	{
		cin >> c[i];
		sum3+= c[i];
	}
	int i1 = 0,i2 = 0, i3 = 0;
	while(!(sum1 == sum2 && sum2 == sum3))
	{
		if(sum1 >= sum2 && sum1 >= sum3)
		{
			sum1-=a[i1];
			i1++;
		}
		else if(sum2 >= sum1 && sum2 >= sum3)
		{
			sum2 -= b[i2];
			i2++;
		}
		else 
		{
			sum3 -=c[i3];
			i3++;
		}
	}
	cout << sum1 << endl;
}
