#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[120], b[50];
	gets(a);
	gets(b);
	if(!strcmp(a,b))
		printf("%s\n", a);
	else
	{
		strcat(a, b);
		printf("%s\n", a);
	}
	return 0;
}