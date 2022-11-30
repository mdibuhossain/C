/*
5. Write a program to sort a list of numbers in a descending order (selection sort / bubble
sort).
*/
#include<stdio.h>
int main()
{
	int n, tmp, max;
	// array size
	scanf("%d", &n);
	int ar[n];
	// input array
	for (int i = 0; i < n; ++i)
		scanf("%d", &ar[i]);
	// selection sort
	for (int i = 0; i < n-1; ++i)
	{
		max = i;
		for (int j = i+1; j < n; ++j)
			if(ar[j] > ar[max])
				max = j;
		tmp = ar[i];
		ar[i] = ar[max];
		ar[max] = tmp;
	}
	// print array
	for (int i = 0; i < n; ++i)
		printf("%d ", ar[i]);
	return 0;
}