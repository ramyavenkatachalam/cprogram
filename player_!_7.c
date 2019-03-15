#include<stdio.h>
int main()
{
char a[100],t;
int i,count=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(i=0;i<count;i++)
{
t=a[i];
a[i]=a[i-1];
a[i-1]=t;
}
}
printf("%s",a);
return 0;
}
