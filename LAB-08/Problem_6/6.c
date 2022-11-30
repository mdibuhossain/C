#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1
int main()
{
	FILE *f1;
	f1 = fopen("output.txt", "w");
	ll x;
	while(1)
	{
		fscanf(stdin, "%lld", &x); // input insert from keyboard(Terminal)
		if(x == -1)
			break;
		fprintf(f1, "%lld\n", x*x);
	}
	fclose(f1);
	return 0;
}