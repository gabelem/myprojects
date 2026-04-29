#include <stdio.h>

int main()
{
	int *ptr;

	for(int i = 0; i < 10; i++)
	{
		*(ptr + i) = 2 * i;

		printf("%d ", ptr[i]);
	}

	return 0;
}
