//codechef
//karan
//coins and triangle 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int test,k,coins;
	cin >> test;
	while(test--)
	{
		cin >> coins;
		k = (sqrt(1 + (8*coins)) - 1)/2;
		cout << k << endl;
	}
	return 0;
}
