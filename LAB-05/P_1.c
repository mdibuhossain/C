// strlen, strrev, strcpy, strcat, strcmp
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[] = "PUSH";
	char b[] = "PUNISHMENT";
	char c[] = "";
	char d[] = "PUSH";

	// using strlen() function
	printf("Length of Char a string: %d\n", strlen(a));
	printf("Length of Char b string: %d\n\n", strlen(b));

	// using strcmp() function
	if(!strcmp(a, d))
		printf("'a' and 'b' strings are same.\n\n");
	else
		printf("'a' and 'b' strings are not same.\n\n");

	// using strrev() function
	printf("Reverse form of Char a string: %s\n\n", strrev(a));

	// using strcpy() function
	strcpy(c, b);
	printf("%s\n\n", c);

	// using strcat() function
	strcat(c, a);
	printf("%s\n", c);
	return 0;
}