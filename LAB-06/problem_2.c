#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int

int get_sum(int *ar, int n)
{
	int sum = 0;
	for(int i = 0; i < n; ++i)
	{
		sum += *ar;
		ar++;
	}
	return sum;
}

float get_avg(int ar[], int n)
{
	float sum = 0;
	for(int i = 0; i < n; ++i)
		sum += ar[i];
	return sum / (float)n;
}

int main()
{
	int n;
	puts("How many numbers you want:");
	printf(">>> ");
	scanf("%d", &n);
	int ar[n];
	for(int i = 0; i < n; ++i)
		scanf("%d", &ar[i]);
	printf("Summation of the list: %d\n", get_sum(ar, n));
	float ava = get_avg(ar, n);
	if(ava == (int)ava)
		printf("Average of the list: %d\n", (int)ava);
	else 
		printf("Average of the list: %0.2f\n", ava);
	return 0;
}
