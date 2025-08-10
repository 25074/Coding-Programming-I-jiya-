#include<stdio.h>
void main()
{
float a,b,c,d;
printf("Enter your gross salary");
/*a=gross
b=allowances
c=deduction
d=net salary*/

scanf("%f",&a);
b=a/10;
c=3*a/100;
d=a+b-c;
printf("Net salary=%f",d);



}
