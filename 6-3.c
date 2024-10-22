#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\nLopetus negatiivisella kokonaisluvulla.");
	int arvot = 0;
	int annettu = 0;
	while (true) {
		int scan;
		printf("Anna arvosana (4-10):");
		scanf("%d", &scan);
		if (scan<0){
			printf("Ohjelmaan syötetty %d arvosanaa.", annettu);
			float keskiarvo = (float) arvot/(float) annettu;
			printf("Arvosanojen keskiarvo: %.2f", keskiarvo);
			break;
		} else {
			annettu++;
			arvot+=scan;
		}
	}
	return 0;
}