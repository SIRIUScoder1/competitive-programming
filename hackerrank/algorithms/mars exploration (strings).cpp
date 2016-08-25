//hackerrank
//mars exploration
//SIRIUScoder

#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[1000];
	scanf("%s",a);
	int i = 1,count = 0;
	do 
	{
		if(a[i-1] != 'S')
		{
			count++;	
		}	
		if(a[i] != 'O')
		{
			count++;
		}
		if(a[i+1] != 'S')
		{
			count++;
		}
		i = i + 3;
	}while(i <= strlen(a)-2);
	cout << count << endl;
	return 0;
}
