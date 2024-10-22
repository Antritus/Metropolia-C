#include <stdio.h>
#include <stdlib.h>

void laske_ja_tulosta(int *, int);

int main(int argc, char *argv[]){
    int x, summa = 0, koko = 5, taulukko[5];
    if (argc == 6){
        for (x=0; x < argc-1; x++){
            taulukko[x] = atoi(argv[x+1]);
        }
        laske_ja_tulosta(taulukko, koko);
    } else {
        printf("Virheellinen määrä komentoriviargumentteja");
    }
}

void laske_ja_tulosta(int *luvut, int koko){
    int summa = 0;
    printf("Taulukon alkiot: ");
    for (int i = 0; i < koko; i++){
        printf("%d ", luvut[i]);
        summa+=luvut[i];
    }
    printf("\nSumma = %d", summa);
}