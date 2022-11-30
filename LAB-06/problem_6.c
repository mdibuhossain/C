#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define true 1

typedef long long int ll;

int prime[10000000];
void sieve(void)
{
	prime[0] = prime[1] = 1;
	for(int i = 2; i * i <= 10000000; i++)
		if(!prime[i])
		{
			for(int j = i * i; j <= 10000000; j += i)
				prime[j] = 1;
		}
}

void isPRIME(void)
{
	int x;
	puts("\n");
	printf("------------------------Prime Checker------------------------\n");
	while(true)
	{
		puts("'-1' to return main menu (without quots)");
		puts("Range: [0, 1e7]");
		printf(">>> ");
		scanf("%d", &x);
		if(x == -1) return;
		if(!prime[x])
			printf("Prime\n\n");
		else printf("Not Prime\n\n");
	}
}

void ODD_EVEN(void)
{
	int x;
	puts("\n");
	puts("---------------------ODD or EVEN checker---------------------");
	while(true)
	{
		puts("'-1' to return main menu (without quots)");
		printf(">>> ");
		scanf(" %d", &x);
		if(x == -1) return;
		if(x&1) printf("ODD\n\n");
		else printf("EVEN\n\n");
	}
}

void LEAP_YEAR(void)
{
	int x;
	puts("\n");
	printf("----------------------Leap Year Checker----------------------\n");
	while(true)
	{
		puts("'-1' to return main menu (without quots)");
		printf(">>> ");
		scanf("%d", &x);
		if(x == -1) return;
		if(!(x%4) || (!(x%100) && !(x%400)))
			printf("Leap Year\n\n");
		else printf("Not Leap Year\n\n");
	}
}

ll factor(int x)
{
	if(x == 0) return 1;
	else return x*factor(x-1);
}

void FACT(void)
{
	int x;
	puts("\n");
	printf("--------------------------Factorial--------------------------\n");
	while(true)
	{
		puts("'-1' to return main menu (without quots)");
		puts("Range: [0, 20]");
		printf(">>> ");
		scanf("%d", &x);
		if(x == -1) return;
		printf("%lld\n\n", factor(x));		
	}
}

void FIBO(void)
{
	int x;
	ll ar[101];
	ar[0] = 0, ar[1] = 1;
	puts("\n");
	printf("--------------First N terms of Fibonacci Series--------------\n");
	while(true)
	{
		puts("'-1' to return main menu (without quots)");
		puts("Range: [0, 90]");
		printf(">>> ");
		scanf("%d", &x);
		if(x == -1) return;
		for(int i = 2; i <= x; ++i)
			ar[i] = ar[i - 1] + ar[i - 2];
		for(int i = 0; i < x; ++i)
		{
			if(i == 0) printf("%lld", ar[i]);
			else printf(" %lld", ar[i]);
		}
		printf("\n\n");		
	}
}

int main()
{
	sieve();
	while(true)
	{
		printf("-------------------------------------------------------------\n");
		printf("           	        1. Odd or Even\n");
		printf("           	        2. Leap Year\n");
		printf("           	        3. Prime or Not Prime\n");
		printf("           	        4. Factorial\n");
		printf("           	        5. Fibonacci Series\n");
		printf("           	        6. Exit\n");
		printf("-------------------------------------------------------------\n");
		int n;
		printf(">>> ");
		scanf("%d", &n);
		switch(n)
		{
			case 1:
				ODD_EVEN();
				break;
			case 2:
				LEAP_YEAR();
				break;
			case 3:
				isPRIME();
				break;
			case 4:
				FACT();
				break;
			case 5:
				FIBO();
				break;
			case 6:
				return 0;
		}
	}
	return 0;
}