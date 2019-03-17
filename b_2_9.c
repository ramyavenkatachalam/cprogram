#include<stdio.h>
int main()
{
int a,n,i,fact=1;
scanf("%d%d",&a,&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
printf("%d",fact);
}
return 0;
}
