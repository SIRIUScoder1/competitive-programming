#include<stdio.h>
int main()
{
	FILE *fp;
	char buff[1000000];
	char a[1000];
	scanf("%s",&a);
	fp = fopen(a,"w");
	fscanf(fp,"%s",buff);
	return 0;
}
