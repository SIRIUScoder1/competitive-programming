//codechef 
//karan
//ciel and receipt 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int test,j,num,count = 0;
	int a[] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
	cin >> test;
	
	while(test--)
	{
		
		cin >> num;
		count = 0;
		while(num > 0)
		{
			for(j = 11;j >= 0;j--)
			{
				if(num >= a[j])
				{
					num = num - a[j];			
					count++;
					//cout << j << endl;
					j++;
					//cout << j << endl;
				}
				
			}
		}
		cout << count << endl;
	}
	return 0;
}
