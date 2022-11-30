#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1

char grd(int n)
{
	if(n >= 80 && n <= 100) return 'A';
	else if(n >= 70 && n <= 79) return 'B';
	else if(n >= 60 && n <= 69) return 'C';
	else if(n >= 50 && n <= 59) return 'D';
	else if(n >= 40 && n <= 49) return 'E';
	else return 'F';
}

int main()
{
	puts("Ctrl+C for terminate the program\n");
	puts("Put marks");
	while(true)
	{
		int n;
		printf(">>> ");
		scanf("%d", &n);
		printf("Grade: %c\n\n",  grd(n));
	}
	return 0;
}