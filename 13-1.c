#include <stdio.h>

int *pienimman_arvon_osoite(int *luvut, int koko);

int main(void){
    int luvut[] = {21, 55, 5, 3, 43};
    int koko = 5;

    int *pienin = pienimman_arvon_osoite(luvut, koko);
    pritnf("Taulukon pienin luku on: %d", pienin);
    return 0;
}

int *pienimman_arvon_osoite(int *luvut, int koko){
	int *pienin = &luvut[0];
	for (int i = 1; i < koko; i++){
		if (*pienin > luvut[i]){
			pienin = &luvut[i];
		}
	}
	return pienin;
}