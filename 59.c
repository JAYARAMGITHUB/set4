#include <stdio.h>

void main() {
	int a[20]={3,6,5,7,102,47,89,23,64,1};
int max,i;
max=a[0];
for(i=1;i<=10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("the largest number is %d",max);

}
