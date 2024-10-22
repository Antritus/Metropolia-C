#include <stdio.h>

int main(void) {
	float markkoja;
	printf("Syötä jokin markkamäärä:");
	scanf("%f", &markkoja);
	printf("Markat euroina: %.2f", markkoja/5.94573);
	return 0;
}