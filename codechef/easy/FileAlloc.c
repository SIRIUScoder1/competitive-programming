#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int q=100,b[100],m;
int main ()
{
int ch,i,j,no;
char fnm[20], tnm[20]="null";
struct FAT /* declaration of structure*/
{
char name[20];
int start;
int len;
}p[20];

m=0;
printf("\n SIMULATION OF FILE ALLOCATION METHODS\n\n");
do
/* reading choices */
{
printf("\n\n Main Menu\n\n\t1.insertion \t2.deletion\n\t3.retrieval\n\t4.exit \n\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{case 1:printf("\n enter file name");
scanf("%d",&(p[m].len));
while(1)
{
no = random(q);
if(b[no]==0)
{
for(j=no+1;j<no+p[m].len;j++)
if(b[j]==1)
break;
}
if(j==no+p[m].len)
break;
}
p[m]. =no;
for(i=no;i<no+p[m].len;i++)
b[i]=1;
printf("page table");
for(i=0;i<m;i++) /* printing file name*/
{
printf("\n%s\t%d\t%d",p[i].name,p[i].start,p[i].len);
printf("\n");
}
break;
case2:printf("enter file name you want to delete");
/* deleting file*/
scanf("%s",fnm);
for(i=0;i<m;i++)
{
if(strcmp(p[i].name,fnm)==0)
{
for(j=p[i].start ;j<(p[i].len+p[i].start);j++)
b[j]=0;
strcpy(p[i].name,"null");
p[i].start=-1;
p[i].len=-1;
printf("%s deleted successfully",fnm);
break;
}
}
for(i=0;i<m;i++)
{
printf("%s",p[i].name);
printf("%d\t%d\t",p[i].start,p[i].len);
printf("\n");
}
case 3:printf("enter file name you want to retrieve"); /* file retrieving */scanf("%s",fnm);
printf("\nblocks allocated are \n");
for(i=0;i<m;i++)
{
if(strcmp(p[i].name,fnm)==0)
{
for(j=p[i].start;j<(p[i].start+p[i].len);j++)
printf("%d\t",j);
break;
}
}
break;
case 4:exit(0);
default:printf("INVALID CHOICE");
}
}while(1);
}
