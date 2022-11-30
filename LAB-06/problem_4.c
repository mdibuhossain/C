#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int

int str_len(char *ss)
{
	int i = 0;
	while(ss[i] != '\0')
		i++;
	return i;
}

char *str_rev(char *ss)
{
	int len = str_len(ss);
	char tmp;
	for(int i = 0; i < len / 2; ++i)
	{
		tmp = ss[i];
		ss[i] = ss[len - i - 1];
		ss[len - i - 1] = tmp;
	}
	return ss;
}

char *str_cpy(char *ss, char *ss2)
{
	int i = 0;
	for(i = 0; ss2[i] != '\0'; ++i)
	{
		ss[i] = ss2[i];
	}
	ss[i] = '\0';
	return ss;
}

char *str_cat(char *ss, char *ss2)
{
	int len = str_len(ss);
	for(int i = 0; ss2[i] != '\0'; ++i)
		ss[len++] = ss2[i];
	ss[len] = '\0';
	return ss;
}

int str_cmp(char *ss, char *ss2)
{
	int x = 0;
	for(int i = 0; ss[i] != '\0' && ss2[i] != '\0'; ++i)
	{
		if(ss[i] != ss2[i])
		{
			x = ss[i] - ss2[i];
			break;
		}
	}
	return x;
}

int main()
{
	char s1[500];
	char s2[500];
	puts("Enter 1st string:");
	gets(s1);
	puts("Enter 2nd string:");
	gets(s2);
	puts("\nString Length:");
	printf("Length of 1st String is = %d\n", str_len(s1));
	printf("Length of 2nd String is = %d\n\n", str_len(s2));

	puts("Compare String:");
	if(str_cmp(s1, s2) == 0)
		puts("1st String and 2nd String are same\n");
	else
		puts("1st String and 2nd String are not same\n");

	printf("Reverse string:\n1st String = ", s1);
	printf("%s\n\n", str_rev(s1));

	str_cat(str_rev(s1), s2);
	printf("Concatenate two strings:\n1st String = %s\n\n", s1);

	str_cpy(s2, s1);
	printf("String Copy:\n2nd String  = %s\n\n", s2);

	return 0;
}