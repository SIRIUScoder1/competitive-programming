//codechef
//karan
//chef and dolls

// important 

//in order to find the the number which is not in pair in array we can use
//this method 
/*
for(i = 0;i < size;i++)
{
	cin >> num;			//array element 
	i = i ^ num;
}
cout << i;
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,a,i=0;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
i=0;
while(n)
{
    scanf("%d",&a);
    i = i ^ a;
    cout << i << endl;
    n--;
}
//cout << endl << i << endl;
}
return 0;
}

