#include <stdio.h>
#include <stdlib.h>

void tulostaLista(float lista[], int koko);

int main(void) 
{
	int paivat;
	printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\ntehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n\nKuinka monta päivää:");
	scanf("%d", &paivat);
	float tunnit[30];
	float yhteensa = 0;
	for (int i = 1; i <= paivat; i++) {
		printf("Anna %d. päivän työtunnit:", i);
		float tunti;
		scanf("%f", &tunti);
		yhteensa+=tunti;
		tunnit[i-1] = tunti;
	}
	printf("\nTehdyt työtunnit yhteensä: %.1f\n", (float) yhteensa);
	printf("Keskimääräinen työpäivän pituus: %.1f\n", yhteensa/(float) paivat);
	printf("Syötetyt tunnit: ");
	tulostaLista(tunnit, paivat);
	
	return 0;
}

void tulostaLista(float lista[], int koko)
{
	for (int i = 0; i <  koko; i++)
	{
		printf("%.1f ", lista[i]);
	}
}