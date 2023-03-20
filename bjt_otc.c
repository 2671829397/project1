#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main()
{
	int bjt;
	scanf("%d", &bjt);
	if (bjt >= 800 && bjt < 2400)
	{
		printf("%d", bjt - 800);
	}
	else
		if (bjt < 800)
		{
			printf("%d", bjt + 1600);
		}

	return 0;
}