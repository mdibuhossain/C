#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1
int main()
{
	int n;
	float ma = 2147483647.0, x;
	float mi = -ma;
	FILE *f1;
	f1 = fopen("input.txt", "r");
	if(f1 == NULL)
	{
		puts("File not exits");
		exit(1);
	}
	fscanf(f1, "%d", &n);
	for(int i = 0; i < n; i++)
	{
		fscanf(f1, "%f", &x);
		if(x > mi)
		{
			mi = x;
		}
		if(x < ma)
		{
			ma = x;
		}
	}
	fclose(f1);
	f1 = fopen("output.txt", "w");
	fprintf(f1, "%.2f\n%.2f\n", mi, ma);
	return 0;
}