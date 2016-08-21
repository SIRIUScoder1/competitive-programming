// #include <bits/stdc++.h>
// using namespace std;
//
// int main()
// {
// 	long long int a, n, k;
// 	cin >> a >> n >> k;
//
// 	long long int arr[100];
// 	long long int i;
// 	for (i=0; i<k; i++)
// 		 arr[i] = 0;
// 	i=0;
// 	//arr[0] = a%(n+1);
// 	while (a != 0 && i < k)
// 	{
// 		arr[i] = a%(n+1);
// 		a = a/(n+1);
// 		i++;
// 	}
//
// 	for (i=0; i<k; i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// 	return 0;
// }


#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
		long int a,n,k;
		cin >> a >> n >> k;
		while(k--)
		{
				printf("%ld ",a%(n+1));
				a = a/(n+1);
		}
		printf("\n");
		return 0;
}
