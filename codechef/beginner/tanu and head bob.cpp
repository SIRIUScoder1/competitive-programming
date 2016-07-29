//codechef
//karan
//tanu and head bob 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,size,flag1,flag2,flag3;
	char a[1001];
	cin >> test;
	while(test--)
	{
		cin >> size;
		scanf("%s",a);flag1 = 0;flag2 = 0;flag3 = 0;
		for(int i = 0;i < size;i++)
		{
			if(a[i] == 'Y')
				flag1 = 1;
			else if(a[i] == 'I')
				flag2 = 1;
		}
		if(flag1 == 1)
			cout << "NOT INDIAN" << endl;
		else if(flag2 == 1)
			cout << "INDIAN" << endl;
		else
			cout << "NOT SURE" << endl;
	}
	return 0;
}
