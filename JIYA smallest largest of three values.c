#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{printf("The largest value is %d",a);
if(b>c)
{printf("The smallest value is %d",c);}
else
{printf("The smallest value is %d",b);

}

}

else
{printf("The largest value is %d",c);
printf("The smallest value is %d",b);}

}
else
{
if(b<c)
{printf("The largest value is %d",c);
printf("The smallest value is %d",a);}
else
{
if(a<c)
{printf("The largest value is %d",b);
printf("The smallest value is %d",a);}
else
{printf("The largest value is %d",b);
printf("The smallest value is %d",c);

}
}
}
}
