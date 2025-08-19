#include<stdio.h>
void main()
{
float p,c,m,t,a;
printf("Enter your marks of three subjects\n");
scanf("%f%f%f",&p,&c,&m);

t=p+c+m;
printf("Total marks scored=%f\n",t);
a=t/3;
printf("Average marks scored=%f\n",a);
  if (p<35 || c<35 || m<35)
  {printf("Grade=Fail\n");}
    else{

if(a>=70)
{printf("Grade= Distinction\n");}
else if(70>a>=60)
{printf("Grade=First Class\n");}
else if(60>a>=50)
{printf("Grade=Second Class\n");}
else if(50>a>=35)
{printf("Grade=Third Class\n");}
else
{printf("Grade=Fail\n");}
}


}

