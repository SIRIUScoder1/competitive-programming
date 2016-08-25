#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[110],b[110];
	stack <char> s;
	int i,k,l;
	scanf("%s",&a);
	//printf("%s",a);
//	cout << strlen(a);
	for(i = 0;i < strlen(a);i++)
	{
		
		if(!s.empty() && s.top() == a[i])
		{
			s.pop();
		}
		else
		{
			s.push(a[i]);
		}
	}
	if(s.size() == 0)
	{
		cout << "Empty String" << endl;
	}
	else
	{
		k = s.size()-1;
		//cout << k << endl;
		for(l = k;l>=0;l--)
		{
			b[l] = s.top();
			s.pop();
		}
		for(int j = 0;j < k+1;j++)
		{
			cout << b[j];
		}
		
	}
	return 0;
}
