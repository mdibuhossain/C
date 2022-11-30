#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int cap_letter[26] = {0};
	int sml_letter[26] = {0};
	char st[200];
	gets(st);
	for (int i = 0; st[i] != '\0'; i++)
	{
		if(st[i] >= 'a' && st[i] <= 'z')
			sml_letter[st[i] - 'a']++;
		else if(st[i] >= 'A' && st[i] <= 'Z')
			cap_letter[st[i] - 'A']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if(cap_letter[i] > 0)
			printf("%c = %d\n",'A' + i, cap_letter[i]);
		if(sml_letter[i] > 0)
			printf("%c = %d\n",'a' + i, sml_letter[i]);
	}
	return 0;
}