#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int

int max(int a, int b)
{
	if(a > b) return a;
	else return b;
}

int min(int a, int b)
{
	if(a > b) return b;
	else return a;
}

int main()
{
	int a, b;
	puts("Enter two numbers:");
	scanf("%d %d", &a, &b);
	printf("Maximum number: %d\n", max(a, b));
	printf("Minimum number: %d\n", min(a, b));	
	return 0;
}

