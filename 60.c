#include <stdio.h>

void main()
{
	int limit,i,f=0,s=1,n;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("%d %d",f,s);
	for(i=2;i<=limit;i++)
	{
		n=f+s;
		f=s;
		s=n;
	
		printf("%d",n);
	}
	

}
