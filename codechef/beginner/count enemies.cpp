//count enemies
//karan 
//hackerearth
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,i,count;
	string a;
	cin >> test;
	while(test--)
	{
		cin >> a;
		count = 0;
		for(i = 0;i < a.size();i++)
		{
			if(a[i] == 'O' && a[i-1] == '*' && a[i+1] == '*')
			{
				count++;
			}
			else if (a[i] == 'O'&& a[i-1] == '*' && a[i+1] == 'O')
			{
				count++;
			}
			else if(a[i] == 'O' && a[i-1] == 'O' && a[i+1] == '*')
			{
				count++;
			}
			else if(i == a.size()-1 && a[i] == 'O' && a[i-1] == '*')
			{
				count++;	
			} 
			else if(i == 0 && a[i] == 'O' && a[i+1] == '*')
			{
				count++;
			}
		}
		cout << count<< endl;
	}
	return 0;
}
