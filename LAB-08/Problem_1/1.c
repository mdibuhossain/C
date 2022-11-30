#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1
int main()
{
	FILE *f1, *f2;
	f1 = fopen("input.txt", "r");
	char ss[512];
	if(f1 == NULL)
	{
		puts("File not exits");
		exit(1);
	}
	f2 = fopen("output.txt", "w");
	while(fgets(ss, 512, f1) != NULL)
	{
		fprintf(f2, "%s", ss);
	}
	fclose(f2);
	fclose(f1);
	return 0;
}