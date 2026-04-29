#include <stdio.h>

void myFunction(int *param)
{
	for(int j = 0; j < 2; j++)
	{
		printf("%d ", param[j]);
	}
}

int main()
{
	int *n;
	int n1 = 10;
	int n2 = 20;
	*(n + 0) = n1;
	*( n + 1) = n2;
	myFunction(n);

	return 0;
}
