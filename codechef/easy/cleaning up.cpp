//codechef
//karan
//cleaning up

#include<bits/stdc++.h>
#define ULL unsigned long long int
using namespace std;

int main()
{
	ULL test,a[10000] ={0},csflag,asflag,num,c[10000],as[10000],j,i,x,y,n,m,u,r;
	cin >> test;
	while(test--)
	{
		cin >> n >> m;
		for(i = 0;i < m;i++)
		{
			cin >> num;
			a[num] = 1;
		}
		csflag = 0;asflag= 0;x=0;y=0;
		for(j = 1;j <= n;j++)
		{
			if(a[j] == 1)
			{
				continue;
			}
			else if(csflag == 0 && asflag == 0)
			{
				c[x] = j;
				x++;
				csflag = 1;
			}
			else if(csflag == 0 && asflag == 1)
			{
				c[x] = j;
				x++;
				csflag = 1;
				asflag = 0;
			}
			else if(csflag == 1 && asflag == 0)
			{
				as[y] = j;
				y++;
				asflag = 1;
				csflag = 0;
			}
		}
		for(i = 0;i < x;i++)
		{
			if(x == 0)
			{
				cout << endl;
			}
			else
			{
				cout << c[i] << " ";
			}
		}
		cout << endl;
		for(r = 0;r < y;r++)
		{
			if(y == 0)
			{
				cout << endl;
			}
			else
			{
				cout << as[r] << " ";
			}
		}
		cout << endl;
		for(u = 0;u <= n;u++)
		{
			a[u] = 0;
		}
	}
	return 0;
}
