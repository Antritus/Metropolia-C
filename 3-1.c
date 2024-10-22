#include <stdio.h>

int main(void) {
	int kokonaisluku;
	float desimaaliluku;
	printf("Anna kokonaisluku:");
	scanf("%d", &kokonaisluku);
	printf("Anna desimaaliluku:");
	scanf("%f", &desimaaliluku);
	
	printf("Syöttämäsi kokonaisluku: %d\n", kokonaisluku);
	printf("Syöttämäsi desimaaliluku kahden desimaalin tarkkuudella: %.2f", desimaaliluku);
	return 0;
}