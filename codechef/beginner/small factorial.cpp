//codechef
//karan
//small factorial 
#include<bits/stdc++.h>
#define ULL unsigned long long int
using namespace std;
int main()
{
	ULL test,num,prod,i;
	cin >> test;
	while(test--)
	{
		cin >> num;prod = 1;
		for(i = 1;i <= num;i++)
		{
			prod = prod * i;
		}
		cout << prod << endl;
	}
	return 0;
}
