/*Write a C program to count total number of
vowels and consonants in a string(can’t use library function).*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int vowel_cnt = 0, cons_cnt = 0;
	char st[200];
	gets(st);
	for (int i = 0; st[i]!='\0'; i++)
	{
		if((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z'))
		{
			if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' ||
			   st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
				vowel_cnt++;
			else
				cons_cnt++;
		}
	}
	printf("Frequency of Vowels: %d\n", vowel_cnt);
	printf("Frequency of Consonants: %d\n", cons_cnt);
	return 0;
}