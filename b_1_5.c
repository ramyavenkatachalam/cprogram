#include<stdio.h>
int main()
{
int n,a[5],c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(k=0;k<n;k++)
{
if(a[k]>c)
{
c=a[k];
}
}
printf("%d",c);
return 0;
}

