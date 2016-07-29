//codechef
//karan
//ciel and a-b

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,k;
	cin >> a >> b;
	k = a-b;
	//cout << a-b << endl;			converting number to string
	stringstream ss;
	ss << k;
	string newString = ss.str();
	//cout << newString << endl;
	newString[newString.size()-1] = '3';
	cout << newString;
	return 0;
}
