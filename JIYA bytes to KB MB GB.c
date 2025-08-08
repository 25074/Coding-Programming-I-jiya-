#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter the value in bytes");
scanf("%d",&a);
b=a/1024;
printf("%dbytes=%dKB\n",a,b);
c=a/1048576;
printf("%dbytes=%dMB\n",a,c);
d=a/1073741824;
printf("%dbytes=%dGB\n",a,d);


}
