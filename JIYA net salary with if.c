#include<stdio.h>
void main()
{
float a,b,c,d;
//a=net salary b=gs c=allowance d=deduction
printf("Enter your gross salary");
scanf("%f",&b);
if(b>=10000)
 {
 c=b/10;
 d=(3*b)/100;
 a=b+c-d;
 printf("Net salary=%f",a);

 }
if(10000>b>=5000)
 {
 c=(7*b)/100;
 d=(2*b)/100;
 a=b+c-d;
 printf("Net Salary=%f",a);
 }

}
