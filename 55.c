#include<stdio.h>
int main()
{
	int a,b,pro;

	scanf("%d%d",&a,&b);
	pro=a*b;
	if((pro%2)==0)
	printf("EVEN");
	else
	printf("ODD");
	return(0);
	
}
