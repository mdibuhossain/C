/*
3. Write a program to reverse an array of real numbers.
*/
#include<stdio.h>
int main()
{
	int n, tmp, rn;
	// array size
	scanf("%d", &n);
	int ar[n];
	rn = n-1;
	// input array
	for (int i = 0; i < n; ++i)
		scanf("%d", &ar[i]);
	// reversing array
	for (int i = 0; i < n/2; ++i)
	{
		tmp = ar[i];
		ar[i] = ar[rn];
		ar[rn--] = tmp;
	}
	// print array
	for (int i = 0; i < n; ++i)
		printf("%d ", ar[i]);
	return 0;
}