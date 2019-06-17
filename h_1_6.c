#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
for(j=i+1;j<n-1;j++)
{
if(a[i]==a[j])
{
temp=a[i];
break;
}
}
}
printf("%d\t is first repeating element",temp);
}
