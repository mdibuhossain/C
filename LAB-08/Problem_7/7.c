#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1

int cmp(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	FILE *f1, *f2, *f3;
	f1 = fopen("list7a.txt", "r");
	f2 = fopen("list7b.txt", "r");
	if(f1 == NULL && f2 == NULL)
	{
		puts("File not exits");
		exit(1);
	}
	int idx = 0, ar[99999];
	while(fscanf(f1, "%d", &ar[idx]) != EOF)
		idx++;
	while(fscanf(f2, "%d", &ar[idx]) != EOF)
		idx++;
	qsort(ar, idx, sizeof(ar[0]), cmp);
	f3 = fopen("output.txt", "w");
	for(int i = 0; i < idx; i++)
	{
		fprintf(f3, "%d\n", ar[i]);
	}
	fclose(f3);
	fclose(f2);
	fclose(f1);
	return 0;
}