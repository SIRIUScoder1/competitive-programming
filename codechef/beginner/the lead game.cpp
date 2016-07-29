//codechef
//karan
//the lead game 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int num,score1 = 0,score2 = 0,sub,max = 0,pos = 0,k,i,a,b;
	cin >> num;
	
	for(i = 0;i < num;i++)
	{
		cin >>	a >> b;
		score1 = score1 + a;
		score2 = score2 + b;
		//cout << score1 << " " << score2 << endl;
		sub = score1 - score2;
		k = abs(sub);
		if(sub <= 0 && k >= max)
		{
			max = k;
			pos = 2;
		}
		else if(sub >= 0 && k >= max)
		{
			max = k;
			pos = 1;
		}	
	}
	cout << pos << " " << max;
	return 0;
}
