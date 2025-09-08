#include<stdio.h>
int main()
{ int a[2][2],b[2][2],c[2][2],i,j;

printf("Enter values of 1st array");
for(i=0; i<2; i++)
for(j=0; j<2; j++)
{scanf("%d",&a[i][j]);
 c[i][j]= a[i][j] + b[i][j];}

printf("Enter values of 2nd array");
for(i=0; i<2; i++)
for(j=0; j<2; j++)
{scanf("%d",&b[i][j]);
 c[i][j]= a[i][j] + b[i][j];}

printf("1st Matrix\n");
for(i=0; i<2; i++)
{ for(j=0; j<2; j++)
 printf("%d",a[i][j]);
  printf("\n");}

  printf("2nd Matrix\n");
for(i=0; i<2; i++)
{ for(j=0; j<2; j++)
 printf("%d",b[i][j]);
  printf("\n");}

printf("Sum  of 1st and 2nd arrays\n");
for(i=0; i<2; i++)
{for(j=0; j<2; j++)
printf("%d",c[i][j]);
 printf("\n");}

}
