/*
4. Insert some random numbers into an array so that each number appears in the array at
most once.
*/
#include<stdio.h>
int main()
{
	int n, j = 0;
	// array size
	scanf("%d", &n);
	int ar[n], cn_ar[1001] = {0};
	// input array and count distinct element
	for (int i = 0; i < n; ++i)
	{
		int k;
		scanf("%d", &k);
		if (cn_ar[k] == 0)
		{
			ar[j++] = k;
			cn_ar[k]++;
		}
	}
	// print  array
	for (int i = 0; i < j; ++i)
		printf("%d ", ar[i]);
	return 0;
}