#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1
int main()
{
	int n;
	FILE *f1;
	f1 = fopen("input.txt", "r");
	if(f1 == NULL)
	{
		puts("File not exit");
		exit(1);
	}
	scanf("%d", &n);
	char st1[n+200], st2[n+200], ch;
	int i = 0;
	fseek(f1, -n, SEEK_END);
	for(i = 0; i < n; i++)
	{
		ch = fgetc(f1);
		st1[i] = ch;
	}
	st1[i] = '\n';
	rewind(f1);
	for(i = 0; i < n; i++)
	{
		ch = fgetc(f1);
		st2[i] = ch;
	}
	st2[i] = '\n';
	fclose(f1);
	printf("%s\n", st1);
	printf("%s\n", st2);
	return 0;
}