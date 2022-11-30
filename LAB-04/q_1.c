/* 
1. Write a program to take some numbers into an array and calculate median of the array
elements.
*/
#include<stdio.h>
int main()
{
	int n, tmp, min;
	// array size
	scanf("%d", &n);
	int ar[n];
	// input array
	for (int i = 0; i < n; ++i)
		scanf("%d", &ar[i]);
	if (n&1)
		printf("%d\n",ar[(n-1)/2]);
	else
		printf("%d %d\n",ar[(n+1)/2-1], ar[(n+1)/2]);
	return 0;
}