#include<stdio.h>
int main()
{
int a,n,sum=0;
printf("Enter a value");
scanf("%d",&n);

for(a=1; a<=n; a=a+1)
{sum = sum + a;}
printf("Sum of first %d natural numebrs is %d",n,sum);

return 0;

}
