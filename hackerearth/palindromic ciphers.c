//palindrome ciphers 
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	unsigned long long int j,f,k,prod = 1;
	int test,i,flag = 0;
	char a[100];
	scanf("%d",&test);
	for(i = 0;i < test;i++)
	{
		scanf("%s",a);
		for(k = 0;k < strlen(a);k++)
		{
			if(a[k] != a[strlen(a)-1-k])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			for(j = 0;j < strlen(a);j++)
			{
				prod = prod * (a[j] - 'a' + 1);
			}
			printf("%lld\n",prod);
		}
		else 
		{
			printf("Palindrome\n");
		}
	}
	return 0;
}*/


#include <stdio.h>
#include<string.h>
int isPalindrome(char str[]);
int main()
{   long long t,i,j,mul=1,z,len;
char a[1000];
    scanf("%lld",&t);
    for(i=0;i<t;i++){
    	mul=1;
    	scanf("%s\n",&a);
    	len=strlen(a);
    	z=isPalindrome(a);
    	if(z==1)printf("Palindrome\n");
    	else if(z==0){
    		
    		for(j=0;j<len;j++){
    			mul=mul*(a[j]-96);
    		}
    
    		printf("%lld\n",mul);
    		
    	}
    	
    		
    }
    return 0;
}
int isPalindrome(char str[])
{
    
    int l = 0;
    int h = strlen(str) - 1;
 
   
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            
            return 0;
        }
    }
    return 1;
}
