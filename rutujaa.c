#include<stdio.h>
int main()
{
int a,i,p=0;
printf("enter the number");
scanf("%d",&a);

for (i=2;i<=a;i++)

{
if(a%i==0)
{
p++;
}
}
if(p==1)
{
printf("prime num");
}
else
{
printf(" not prime number");
}
return 0;
}

