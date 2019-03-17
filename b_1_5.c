#include<stdio.h>
int main()
{
int a=34,b=44,c=87;
if(a>b&&a>c)
{
printf("%d",a);
}
else if(b>c&&b>a)
{
printf("%d",b);
}
else
{
printf("%d",c);
}
return 0;
}

