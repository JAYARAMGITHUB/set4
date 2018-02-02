#include<stdio.h>
int main()
{
	int g,i;
	char str[30];
	printf("enter times\n");
	scanf("%d",&g);
	scanf("%s",&str);
	for(i=1;i<=g;i++)
	{
		printf("%s",str);
	}getch();
}
