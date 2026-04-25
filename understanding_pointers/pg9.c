#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 3;
	int *pi = &num;

	printf("[num] Address of: %p, Value: %d\n", &num, num);
	printf("[pi] Address of %p, Value: %d\n", pi, *pi);
	printf("\n");

	// 64-bits: pointers == 8-bits
	// 32-bits: pointers == 4-bits
	// %d -> equivale a 4-bits em ambos 32 e 64 bits
	// por isso, nao eh possivel usar %d para obter o endereco de num.
	// Meu computador eh 64 bits, e um ponteiro eh equivalente a 8-bits.
	// Portanto se eu tentar ler um ponteiro usando %d, nao funcionaria
	// devido ao fato de %d ocupar apenas 4-bits, e nao 8-bits (no caso do endereco de ponteiros)

	int num2 = 0;
	pi = &num2;
	printf("[pi] Address of %p, Value: %d\n", pi, *pi);

	return 0;
}
