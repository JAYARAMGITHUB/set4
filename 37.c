#include<stdio.h>
void main()
{
int a,b,t;
printf("enter the values of a and b before swapping\n");
scanf("%d %d",&a,&b);
t=a;
a=b;
b=t;
printf("the values of a and b after swapping: %d,%d",a,b);
}
