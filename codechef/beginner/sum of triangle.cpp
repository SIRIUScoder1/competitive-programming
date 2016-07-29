//codechef
//karan
//sums in a triangle 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int test,i,j,num;
	int a[100][100];
	cin >> test;
	while(test--)
	{
		cin >> num;
		for(i = 0;i < num;i++)
		{
			for(j = 0;j <= i;j++)
			{
				cin >> a[i][j];
			}
		}
		for(i = (num-1);i>= 0;i--)			// taking last two and then adding it to the above array element
		{
			for(j = 0;j < i;j++)
			{
				a[i-1][j] = a[i-1][j] + max(a[i][j],a[i][j+1]);
			}
		}
		cout << a[0][0] << endl;
	}
	return 0;
}


//4
//1
//1 2
//4 1 2
//2 3 1 1
////////////////////////////
//1											//1				//1					//9
//1 2										//1 2			//8 6
//(4+max(2,3)) (1+max(3,1)) (2+max(1,1))	//7 4 3
