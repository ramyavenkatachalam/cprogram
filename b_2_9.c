#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fact=fact*i;
printf("%d",fact);
}
return 0;
}
