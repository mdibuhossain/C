#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char st[200];
	gets(st);
	for (int i = 0, j; st[i] != '\0'; i++)
	{
		while ((st[i] != '\0') && !(st[i] >= 'a' && st[i] <= 'z') && !(st[i] >= 'A' && st[i] <= 'Z'))
		{
			for(j = i; st[j] != '\0'; j++)
			{
				st[j] = st[j + 1];
			}
			st[j] = '\0';
		}
	}
	printf("%s\n", st);
	return 0;
}