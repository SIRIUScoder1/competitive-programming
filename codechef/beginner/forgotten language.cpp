//codechef
//karan
//forgotten language

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,flagarr[100] = {0},i,j,size1,size2,num,t,k,l,q;
	char a[100][10],b[100][10];
	cin >> test;
	while(test--)
	{
		cin >> size1 >> size2;			//number of forgotton words and the number of sentences
		for(i = 0;i < size1;i++)		// takes the input of the forgotton words
		{
			scanf("%s",a[i]);
		}
		for(q = 0;q < size2;q++)
		{
			cin >> num;
			for(k = 0;k < num;k++)
			{
				scanf("%s",b[k]);
			}
			for(j = 0;j < size1;j++)
			{
				for(t = 0;t < num;t++)
				{
					if(strcmp(a[j],b[t]) == 0)
					{
						flagarr[j] = 1;
					}
				}
			}
		}
		for(j = 0;j < size1;j++)
		{
			if(flagarr[j] == 1)
			{
				cout << "YES" << " ";
			}
			else
			{
				cout << "NO" << " ";
			}
		}
		cout << endl;
		for(l = 0;l < size1;l++)
		{
			flagarr[l] = 0;
		}
	}
	return 0;
}
