//codechef
//karan
//collisions

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,sum,count,boys,boy,girls,girl,i,j,k;
	char a[15][15];
	cin >> test;
	while(test--)
	{
		cin >> boy >> girl;
		for(i = 0;i < boy;i++)
		{
			scanf("%s",a[i]);
		}
		sum = 0;
		for(girls = 0;girls < girl;girls++)
		{
			count = 0;
			for(boys = 0;boys < boy;boys++)
			{
				if(a[boys][girls] == '1')
				{
					count++;
				}
			}
			count--;
			k = ((count)*(count+1))/2;
			sum = sum + k;
		}
		cout << sum << endl;
	}
	return 0;
}
