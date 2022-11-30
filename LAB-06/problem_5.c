#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int

int rec_sum(int n)
{
	if(n == 0) return 0;
	return n + rec_sum(n - 1);
}

int main()
{
	int n;
	printf("1+2+......+n\n\nn = ");
	scanf("%d", &n);
	printf("Summation of the series is: %d\n", rec_sum(n));
	return 0;
}