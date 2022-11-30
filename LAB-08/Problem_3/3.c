#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1

typedef struct student
{
	char name[30];
	char grade;
	int score;
} student;

char GRADE(int x)
{
	if(x >= 80 && x <= 100)
		return 'A';
	else if(x >= 70 && x <= 79)
		return 'B';
	else if(x >= 60 && x <= 69)
		return 'C';
	else if(x >= 50 && x <= 59)
		return 'D';
	else if(x >= 40 && x <= 49)
		return 'E';
	else if(x < 40)
		return 'F';
}

int main()
{
	FILE *f1 = NULL, *f2 = NULL;
	student st;
	char nm[50];
	int mk, i = 0;
	f1 = fopen("input.txt", "r");
	if(f1 == NULL)
	{
		puts("File not exits");
		exit(1);
	}
	f2 = fopen("output.txt", "a");
	while(fgets(nm, 50, f1) != NULL)
	{
		int scr = 0, j = 0;
		for(i = 0; nm[i] != '\0'; i++)
		{
			if(nm[i] >= '0' && nm[i] <= '9')
			{
				scr *= 10;
				scr += nm[i] - '0';
				j++;
			}
		}
		nm[i - j - 1] = '\0';
		strcpy(st.name, nm);
		st.score = scr;
		st.grade = GRADE(st.score);
		fprintf(f2, "%-31s%-5d%c\n", st.name, st.score, st.grade);
	}
	fclose(f2);
	fclose(f1);
	return 0;
}