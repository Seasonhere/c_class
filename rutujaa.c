#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
int num1,num2,result1,result2,result3,result4;

printf("enter the nmuber");
scanf("%d %d",& num1 ,&num2);
result1= add(num1,num2);
result2= sub(num1,num2);
result3= mul(num1,num2);
result4=div(num1,num2);


printf("the addition is %d \n",result1);
printf("the subtraction is %d \n",result2);
printf("the multiplication is %d \n",result3);
printf("the division is %d \n",result4);


return 0;
}
int add(int a,int b)

{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return  a*b;
}
int div(int a,int b)
{
return a/b;
}
