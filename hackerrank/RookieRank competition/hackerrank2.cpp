//SIRIUScoder
//counting vallys
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int len,valley = 0;
	long int valleyflag;
	cin >> len;
	char a[1000000];
	scanf("%s",a);
	long int count = 0;
	for(int i = 0;i < len;i++)
	{
		if(a[i] == 'U')
		{
			count++;
		}
		else if(a[i] == 'D')
		{
			count--;
		}
		if(count < 0)
		{
			valleyflag = 1;
			if(a[i+1] == 'U' && count == -1&& valleyflag == 1)
			{
				valley++;
			}
		}
	}
	cout << valley << endl;
	return 0;
}
