#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void tower(int c, int start, int end, int temp);

int main()
{
	int n;

	printf("Enter the starting number of disks:");
	scanf("%d", &n);

	tower(n, 1, 2, 3);

	return 0;
}

void tower(int c, int start, int end, int temp)
{
	if (c == 1) {
		printf("%d-- > %d\n", start, end);
		return;
	}

	tower(c - 1, start, temp, end);
	printf("%d-- > %d\n", start, end);
	tower(c - 1, temp, end, start);
}