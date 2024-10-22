#include <stdio.h>

int main(void){
	char etunimi[15], sukunimi[20], tiedosto[12];
	
	printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\n");
	printf("Syötä etunimesi:");
	scanf("%s", &etunimi);
	printf("Syötä sukunimesi:");
	scanf("%s", &sukunimi);
	printf("Tiedosto johon haluat tallentaa nimesi:");
	scanf("%s", &tiedosto);

	FILE* file = fopen(tiedosto, "w");
	if (file == NULL){
		printf("Virhe tiedoston avaamisessa!");
		return 0;
	}
	
	fprintf(file, "%s %s", etunimi, sukunimi);
	fclose(file);
	
	printf("\n\nTallennus onnistui!");
}