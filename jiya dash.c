#include<stdio.h>
void main()
{ int a,n,b=1;
printf ("Enter a value\n");
scanf("%d",&n);
for(a=1; a<=n; a=a+1)
{
    b = b*a;
}
printf("Factorial of %d is %d",n,b);
}
