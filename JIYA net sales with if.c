#include<stdio.h>
int main()
{

float ns,gs,d;

 printf("Enter your gross sales");
 scanf("%f",&gs);

 if(gs>20000)
 {d=0.15*gs;
  ns=gs-d;
  printf("Net sales=%f",ns);
 }

 if(20000>gs>10000)
 {d=0.1*gs;
  ns=gs-d;
  printf("Net sales=%f",ns);
 }
 else
 {d=0.05*gs;
 ns=gs-d;
 printf("Net sales=%f",ns);
 }
}
