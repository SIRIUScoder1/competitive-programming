//codechef
//karan
//count steps in matrix

//// manhatten distance problem 
//// can solved by taking the differce between the coordinates.
//// done by the hashing approach 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int test,x[250001],y[250001],size,k,i,j,num,sum,dist;
	cin >> test;
	while(test--)
	{
		cin >> size;
		k = pow(size,2);
		for(i = 1;i <= size;i++)
		{
			for(j = 1;j <= size;j++)
			{
				scanf("%d",&num);
				x[num] = j;y[num] = i;		
			}
		}
		/*
		for(i = 1;i <= k;i++)			//y coordinates
		{
			cout << x[i] << " ";
		}
		cout << "\n";
		for(i = 1;i <= k;i++)			//x coordinates
		{
			cout << y[i] << " ";
		}
		*/
		sum = 0;
		for(int u = 1;u < k;u++)
		{
			dist = abs(y[u+1]-y[u]) + abs(x[u+1]-x[u]);
			sum = sum + dist;
		}
		cout << sum << endl;
	}
	return 0;	
}
