#include <iostream>
using namespace std;
 
int main()
{
	long long int n,m,d,t,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>d;
		long long int loc[n][2],tar[m][2],c,count=0;
		for(i=0;i<n;i++)
		cin>>loc[i][0]>>loc[i][1];
		for(i=0;i<m;i++)
		cin>>tar[i][0]>>tar[i][1];
		for(i=0;i<m;i++)
		{
			c=0;
			for(j=0;j<n;j++)
			{
				if(abs(tar[i][1]-loc[j][1])+abs(tar[i][0]-loc[j][0])<=d)
				{
					c=1;
					break;
				}
			}
			if(c==1)
			count++;
			if(count>m/2)
			{
				cout<<"YES\n";
				break;
			}
		}
		if(count<m/2)
		cout<<"NO\n";
	}
}
