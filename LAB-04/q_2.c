/*
2. Write a program to find elements from an array that are larger than the average.
*/
#include<stdio.h>
int main()
{
	int n, k = 0;
	float avg = 0;
	// array size
	scanf("%d", &n);
	int ar[n], lrg_el[n];
	// input array
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &ar[i]);
		avg += ar[i];
	}
	avg /= (float)n;
	// comparing array elements with average
	for (int i = 0; i < n; ++i)
	{
		if (ar[i] > avg)
			lrg_el[k++] = ar[i];
	}
	// print array
	for (int i = 0; i < k; ++i)
		printf("%d ", lrg_el[i]);
	return 0;
}