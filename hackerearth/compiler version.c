// compiler version
/* thing to learn is that how to take multiple line input */
/* for that first we have to use a while loop with condition 
	gets(str) != NULL  */

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100];
	int i,j,k;
	while(gets(a) != NULL)	// its an infinite input taking loop that will never end
	{
	k = strlen(a);
	for(i = 0;i < k;i++)
	{
		if(a[i] == '/' && a[i+1] == '/')
		{
			break;
		}
		if(a[i] == '-' && a[i+1] == '>')
		{
			a[i] = '.';
			for(j = i+1;j < k;j++)
			{
				a[j] = a[j+1];
			}
			k--;
		}
	}
		puts(a);
	}
	return 0;
}
