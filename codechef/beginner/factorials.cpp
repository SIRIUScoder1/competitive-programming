//codechef 
//karan
//factorials 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,num,n1,i,m,x,temp,a[200];
	cin >> test;
	while(test--)
	{
		cin >> num;
		n1 = num;
		i = 0;
		m = 0;
		while(n1 != 0)
		{
			a[i] = n1 % 10;
			n1 = n1 /10;
			i++;
			m++;
		}
		while(num != 1)
		{
			temp =0;i = 0;
			while(i != m)
			{
				x = a[i]*(num-1)+temp;
				a[i] = x % 10;
				temp = x / 10;
				i++;
			}
			while(temp != 0)
			{
				a[m] = temp % 10;
				temp = temp / 10;
				m++;
			}
			num--;
		}
		i = m-1;
		while(i != -1)
		{
			cout << a[i];
			i--;
		}
		cout << endl;		
	}
	return 0;
}
