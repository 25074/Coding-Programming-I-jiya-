#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
if(a<b)
{printf("The largest value is %d\n",b);
printf("The smallest value if %d\n",a);
}
else
{
printf("The largest value is %d\n",b);
printf("The smallest value is %d\n",a);
}
}
