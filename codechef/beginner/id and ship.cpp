//codechef
//karan
//id and ship 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	char i;
	while(test--)
	{
		cin >> i;
		if(i == 'B' || i == 'b')
			cout << "BattleShip" << endl;
		else if(i == 'C' || i == 'c')
			cout << "Cruiser" << endl;
		else if(i == 'D' || i == 'd')
			cout << "Destroyer" << endl;
		else if(i == 'F' ||i == 'f')
			cout << "Frigate" << endl;
	}
	return 0;
}
