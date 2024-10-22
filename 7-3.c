#include <stdio.h>

int suurin(int eka, int toka, int kolmas); 
int pienin(int eka, int toka, int kolmas);

int main(void) 
{
	int eka, toka, kolmas;
	printf("Anna 1. luku:");
	scanf("%d", &eka);
	printf("Anna 2. luku:");
	scanf("%d", &toka);
	printf("Anna 3. luku:");
	scanf("%d", &kolmas);
	printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.", suurin(eka, toka, kolmas), pienin(eka, toka, kolmas));
}

int suurin(int eka, int toka, int kolmas){
	return eka > toka ? eka > kolmas ? eka : kolmas : toka > kolmas ? toka : kolmas;
}

int pienin(int eka, int toka, int kolmas){
	return eka < toka ? eka < kolmas ? eka : kolmas : toka < kolmas ? toka : kolmas;
}