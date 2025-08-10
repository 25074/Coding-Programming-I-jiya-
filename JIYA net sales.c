#include<stdio.h>
void main()
{
int a,b,c;
/* a=gross
b=discount
c=net*/
printf("Enter the gross sales");
scanf("%d",&a);
b=a/10;
c=a-b;
printf("Net sales=%d",c);

}
