#include<stdio.h>
#include<conio.h>
int main()
{
int num=0,i,n,a[100],large,small;
printf("Enter the total number");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
large=small=a[0];
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("%d is the largest number",large);
printf("%d is the smallest number",small);
return(0);
}
