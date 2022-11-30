#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int
#define true 1

typedef struct date
{
	int day, month, year;
} date;

int LP(int x)
{
	if(!(x%4) || (!(x%100) && !(x%400)))
		return 1;
	else
		return 0;
}

void OUTPUT(date dt)
{
	switch(dt.month)
	{
		case 1:
			printf("January %d, %d\n",dt.day, dt.year);
			break;
		case 2:
			printf("February %d, %d\n",dt.day, dt.year);
			break;
		case 3:
			printf("March %d, %d\n",dt.day, dt.year);
			break;
		case 4:
			printf("April %d, %d\n",dt.day, dt.year);
			break;
		case 5:
			printf("May %d, %d\n",dt.day, dt.year);
			break;
		case 6:
			printf("June %d, %d\n",dt.day, dt.year);
			break;
		case 7:
			printf("July %d, %d\n",dt.day, dt.year);
			break;
		case 8:
			printf("August %d, %d\n",dt.day, dt.year);
			break;
		case 9:
			printf("September %d, %d\n",dt.day, dt.year);
			break;
		case 10:
			printf("October %d, %d\n",dt.day, dt.year);
			break;
		case 11:
			printf("November %d, %d\n",dt.day, dt.year);
			break;
		case 12:
			printf("December %d, %d\n",dt.day, dt.year);
			break;
	}
}

void CHECK(date dt)
{
	int flag = 1;
	if(dt.year >= 0)
	{
		// puts("Valid Year");
	}
	else
	{
		puts("Invalid Year");
		flag = 0;
	}

	if(dt.month <= 12 && dt.month >= 1)
	{
		if(dt.month == 2)
		{
			if(LP(dt.year) && dt.day >= 1 && dt.day <= 29)
			{
				// puts("Valid Day");
			}
			else if(dt.day >= 1 && dt.day <= 28)
			{
				// puts("Valid Day");
			}
			else
			{
				puts("Invalid Day");
				flag = 0;
			}
		}
		else if(dt.month >= 1 && dt.month <= 7)
		{
			if((dt.month&1) && dt.day >= 1 && dt.day <= 31)
			{
				// puts("Valid Day");
			}
			else if(dt.day >= 1 && dt.day <= 30)
			{
				// puts("Valid Day");
			}
			else
			{
				puts("Invalid Day");
				flag = 0;
			}
		}
		else
		{
			if((dt.month&1) && dt.day >= 1 && dt.day <= 30)
			{
				// puts("Valid Day");
			}
			else if(!(dt.month&1) && dt.day >= 1 && dt.day <= 31)
			{
				// puts("Valid Day");
			}
			else
			{
				puts("Invalid Day");
				flag = 0;
			}
		}
	}
	else 
	{
		puts("Invalid Month");
		flag = 0;
	}

	if(flag)
	{
		puts("Valid Date");
		OUTPUT(dt);
	}
}

void READ(void)
{
	date dt;
	printf("Enter Date by following pattern \"day month year\" without quotes\n");
	scanf("%d %d %d", &dt.day, &dt.month, &dt.year);
	CHECK(dt);
}

int main()
{
	READ();
	return 0;
}