#include <stdio.h>
void main()
{
	int i,j,str1,str2;
	char a[100],b[100];
	printf("enter the first string\n");
	printf("enter the second string\n");
	scanf("%s %s",&a,&b);
	i=strlen(a);
	j=strlen(b);
	if(a==b)
	{
		printf(" %s\n",a );
	}else if(a>b)
	{
		printf(" %s\n",a);
	}else
	{
		printf(" %s \n",b);
	}

}
