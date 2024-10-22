#include <stdio.h>

int main(void) 
{
	int numero;
	printf("Anna kokonaisluku:");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("Luku %d on parillinen.", numero);
	} else {
		printf("Luku %d on pariton.", numero);
	}
}