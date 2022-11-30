#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1

typedef struct studentInfo
{
	char name[100];
	char id[30];
	float gpa;
} studentInfo;

int main()
{
	studentInfo stinfo;
	printf("Enter Student Name: ");
	gets(stinfo.name);
	printf("Enter Student ID: ");
	gets(stinfo.id);
	printf("Enter Student GPA: ");
	scanf("%f", &stinfo.gpa);

	printf("\n-----Student Information-----\n");
	printf("\tName: %s\n", stinfo.name);
	printf("\tID: %s\n", stinfo.id);
	printf("\tGPA: %0.2f\n", stinfo.gpa);
	return 0;
}