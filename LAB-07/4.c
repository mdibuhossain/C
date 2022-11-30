#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1

typedef struct city
{
	char city[15];
	double population;
	float literacy;
} city;

int cp_pop(const void *a, const void *b)
{
	int x = ((city *)a) -> population;
	int y = ((city *)b) -> population;
	return x - y;
}

int cp_lit(const void *a, const void *b)
{
	int x = ((city *)a) -> literacy;
	int y = ((city *)b) -> literacy;
	return x - y;
}

int cp_city(const void *a, const void *b)
{
	const char * x = ((city *)a) -> city;
	const char * y = ((city *)b) -> city;
	return strlen(x) - strlen(y);
}

int main()
{
	city c1[5];
	for(int i = 1; i <= 5; i++)
	{
		printf("City_%d: ", i);
		gets(c1[i - 1].city);
		printf("Population: ");
		scanf("%lf", &c1[i - 1].population);
		printf("Literacy level: ");
		scanf("%f", &c1[i - 1].literacy);
		getchar();
	}

	qsort(c1, 5, sizeof(city), cp_city);
	printf("\t---Sorted by City Name---\n");
	printf("%-15s %-25s %s\n", "City Name", "Population", "Literacy");
	for(int i = 0; i < 5; i++)
	{
		printf("%-15s %-25.4lf %0.2f\n", c1[i].city, c1[i].population, c1[i].literacy);
	}

	puts("");

	qsort(c1, 5, sizeof(city), cp_pop);
	printf("\t---Sorted by Population---\n");
	printf("%-15s %-25s %s\n", "City Name", "Population", "Literacy");
	for(int i = 0; i < 5; i++)
	{
		printf("%-15s %-25.4lf %0.2f\n", c1[i].city, c1[i].population, c1[i].literacy);
	}

	puts("");

	qsort(c1, 5, sizeof(city), cp_lit);
	printf("\t---Sorted by Literacy level---\n");
	printf("%-15s %-25s %s\n", "City Name", "Population", "Literacy");
	for(int i = 0; i < 5; i++)
	{
		printf("%-15s %-25.4lf %0.2f\n", c1[i].city, c1[i].population, c1[i].literacy);
	}

	return 0;
}