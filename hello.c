#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int i, j;

	/* あいさつを印字する */
	printf("Hello, world.\n");

	/* 九九を印字する */
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf(" %2d", i * j);
		}
		putchar('\n');
	}

	return EXIT_SUCCESS;
}

