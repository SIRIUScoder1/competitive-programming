//SIRIUScoder
//magic square forming

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[4][4],b[3][3] = {{8,3,4},{1,5,9},{6,7,2}},c[3][3] = {{6,7,2},{1,5,9},{8,3,4}}, d[3][3] = {{8,1,6},{3,5,7},{4,9,2}}, e[3][3]= {{6,1,8},{7,5,3},{2,9,4}}, f[3][3] = {{4,3,8},{9,5,1},{2,7,6}},g[3][3] = {{2,7,6},{9,5,1},{4,3,8}},h[3][3] = {{4,9,2},{3,5,7},{8,1,6}},i1[3][3]={{2,9,4},{7,5,3},{6,1,8}};

	int m[10],sum;
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			cin >> a[i][j];
		}
	}
	sum = 0;
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			sum = sum + abs(a[i][j]-b[i][j]);
		}
	}
	// cout << m[0] << endl;
	m[0] = sum;
	sum = 0;
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			sum = sum + abs(a[i][j]-c[i][j]);

		}
	}
	m[1]= sum;
	sum = 0;
		for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			sum = sum + abs(a[i][j]-d[i][j]);
		}
	}
	m[2]= sum;
	sum = 0;
		for(int i = 0;i < 3;i++)
		{
			for(int j = 0;j < 3;j++)
			{
				sum = sum + abs(a[i][j]-e[i][j]);
			}
		}
	m[3]= sum;
	sum = 0;
		for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			sum = sum + abs(a[i][j]-f[i][j]);

		}
	}
	m[4]= sum;
	sum = 0;
		for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			sum = sum + abs(a[i][j]-g[i][j]);
		}
	}
		m[5]= sum;
		sum = 0;
		for(int i = 0;i < 3;i++)
		{
			for(int j = 0;j < 3;j++)
			{
				sum = sum + abs(a[i][j]-h[i][j]);
			}
		}
	m[6]= sum;
	 sum = 0;
		for(int i = 0;i < 3;i++)
		{
			for(int j = 0;j < 3;j++)
			{
				sum = sum + abs(a[i][j]-i1[i][j]);
			}
		}
	m[7]= sum;
	sum  = 0;
	sort(m,m+7);
	cout << m[0] << endl;
	return 0;

}

