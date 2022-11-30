#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1

typedef struct st_cont
{
	char st[20];
} st_cont;

int palindrom(char *st)
{
	int len = strlen(st), flag = 1;
	for(int i = 0; i < len / 2; i++)
	{
		if(st[i] != st[len - i - 1])
		{
			flag = 0;
			return flag;
		}
	}
	return flag;
}

int main()
{
	st_cont ss[100];
	FILE *f1;
	f1 = fopen("list.txt", "r");
	if(f1 == NULL)
	{
		puts("File not exits");
		exit(1);
	}
	int idx = 0;
	while(fscanf(f1, "%s", &ss[idx].st) != EOF)
	{
		idx++;
	}
	fclose(f1);
	f1 = fopen("list.txt", "w");
	for(int i = 0; i < idx; i++)
	{
		if(palindrom(ss[i].st))
		{
			fprintf(f1, "%-20spalindrome\n", ss[i].st);
		}
		else
		{
			fprintf(f1, "%-20sNot palindrome\n", ss[i].st);
		}
	}
	fclose(f1);
	return 0;
}