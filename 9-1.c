#include <stdio.h> 

int main(void) 
{ 
	FILE *tiedosto; 
	int luku1, luku2, luku3, luku4; 
	if((tiedosto = fopen("luvut.s", "r")) == NULL) 
	{ 
		printf("Tiedostoa ei löydetty!"); return 0; 
	} else 
	{ 
		fscanf(tiedosto, "%d %d %d %d ", &luku1, &luku2, &luku3, &luku4);  
		fclose(tiedosto); 
		printf("Tiedostosta luvut.s löytyneet luvut: \n%d, %d, %d ja %d\n\nLukujen summa: %d", luku1, luku2, luku3, luku4, luku1 + luku2 + luku3 + luku4); 
	} 
	return 0; 
}