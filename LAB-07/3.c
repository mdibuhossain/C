#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1

typedef struct student
{
	char name[30];
	float marks;
	char grade;
} student;

char GRADE(float x)
{
	if(x >= 80.0 && x <= 100.0)
		return 'A';
	else if(x >= 70.0 && x <= 79.0)
		return 'B';
	else if(x >= 60.0 && x <= 69.0)
		return 'C';
	else if(x >= 50.0 && x <= 59.0)
		return 'D';
	else if(x >= 40.0 && x <= 49.0)
		return 'E';
	else if(x < 40.0)
		return 'F';
}

int main()
{
	int n;
	puts("Total Students number:");
	scanf("%d", &n);
	getchar();
	student st[n];
	puts("Enter students' informations:");
	for(int i = 0 ; i < n; i++)
	{
		printf("Name: ");
		gets(st[i].name);
		printf("Marks: ");
		scanf("%f", &st[i].marks);
		getchar();
		st[i].grade = GRADE(st[i].marks);
	}

	puts("\t---------Students' Report---------");
	printf("%-20s %s %20s\n", "STUDENTS NAME", "MARKS", "GRADE");
	for(int i = 0 ; i < n; i++)
	{
		printf("%-20s %0.1f %17c\n", st[i].name, st[i].marks, st[i].grade);
	}

	return 0;
}