//codechef
//karan
//smallest number of notes

////
//taversing the array wherever you find an element which is  less than the number 
//entered then count is increases and the value is decremented and again the number
// is checked with the same number by doing i++



#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int test,a[] = {1,2,5,10,50,100},num,count;
	cin >> test;
	
	while(test--)
	{
		cin >> num;
		count = 0;
		while(num > 0)
		{
			for(int i = 5;i >=0;i--)
			{
				if(num >= a[i])
				{
					count++;
					num = num -a[i];
					i++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
