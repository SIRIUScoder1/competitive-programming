//codechef
//karan
//grade the steel 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,a,c;
	double b;
	cin >> test;
	while(test--)
	{
		cin >> a >> b >> c;
		if(a > 50 && b < 0.7 && c > 5600)
			cout << "10" << endl;
		else if(a > 50 && b < 0.7 && c <= 5600)
			cout << "9" << endl;
		else if(a <= 50 && b < 0.7 && c > 5600)
			cout << "8" << endl;
		else if(a > 50 && b >=0.7 && c > 5600)
			cout << "7"<< endl;
		else if(a > 50 || b < 0.7 || c > 5600)
			cout << "6" << endl;
		else if(a <= 50 && b>= 0.7 && c<= 5600)
			cout << "5" << endl;
	} 
	return 0;
}
