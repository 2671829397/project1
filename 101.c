#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main()
{
	int n, k, i;
	double sum = 0;
	scanf("%d %d", &n, &k);
	for (i = k; i <= n; i += k)
		sum += i;
	printf("%.1f ", sum / (n / k));
	sum = (1 + n) * n / 2 - sum;
	printf("%.1f\n", sum / (n - n / k));

	return 0;
}