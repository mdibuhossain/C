#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1
int main()
{
	FILE *f1 = NULL, *f2 = NULL;
	f1 = fopen("input.txt", "r");
	if(f1 == NULL)
	{
		puts("File not exits");
		exit(1);
	}
	int sum = 0, x;
	while(fscanf(f1, "%d", &x) != EOF)
		sum += x;
	fclose(f1);
	f1 = fopen("input.txt", "a");
	fprintf(f1, "\n%d", sum);
	fclose(f1);
	return 0;
}