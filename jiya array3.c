#include<stdio.h>
int main()
{
int i,j,t,a[5];
printf("Enter 5 values\n");
for(i=0; i<5; i++)
scanf("%d",&a[i]);

printf("Original Array\n");
for(i=0;i<5;i++)
printf("%d",a[i]);

for(i=0; i<4; i++)
for(j=i+1; j<5; j++)
if(a[i]>a[j])
{t=a[i];
a[i]=a[j];
a[j]=t;}

printf("Sorted Array\n");
for(i=0; i<5; i++)
printf("%d",a[i]);






}
