#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
	//char *s = (char*) malloc(100000 * sizeof(char));
	//scanf("%s",s);
	
	char s[100000] = {'0'};
	gets(s);
	unsigned long long int test,i,c,b,k,l,m;
	scanf("%llu",&test);
	//scanf("%s",s);
	for(i = 0;i < test;i++)
	{
		scanf("%llu",&c);
		scanf("%llu",&b);
		k = strlen(s);
		l = (c-1) % k;
		m = (b-1) % k;
		if(s[l] == s[m])
		{
			printf("Yes\n");
		}
		else 
		{
			printf("No\n");
		}
	} 
	//free(s);
	return 0;
}
/*
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
int main(){
string S;
int Q, slength;
long num1, num2;

cin >> S;
slength = S.size();
scanf("%d", &Q);


for(int i=0;i<Q;i++)
{
scanf("%lld %lld", &num1, &num2);
num1--;
num2--;
num1 = num1%slength;
num2 = num2%slength;

if (S[num1]==S[num2])
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
*/
