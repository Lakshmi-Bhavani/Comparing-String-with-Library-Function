#include<stdio.h>
#include<string.h>
main()
{
	char a[]="abcd",b[]="abcd";
	int result;
	result=	strcmp(a,b);
	if(result==0)
	{
		printf("Both strings are equal");
	
	}
	else
	{
		printf("Both strings are not equal");
	}
	
}
