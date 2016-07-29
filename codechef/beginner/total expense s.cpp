//codechef
//karan
//total expenses

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int test;
	double a,b,k;
	cin >> test;
	while(test--)
	{
		cin >> a >> b;
		if(a < 1000)
		{
			printf("%.6f",a*b);
		}
		else 
		{
			k = a*b - (0.1 * a*b);
			printf("%.6f",(k));
		}
		cout << endl;
	}
	return 0;
}
