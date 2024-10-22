#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Henkilo {
    char etunimi[20];
    char sukunimi[20];
    char puhelinnumero[20];
};

int henkiloMaara() {
    FILE *tiedosto = fopen("luettelo.txt", "r");
    if (tiedosto == NULL) {
        return -1;
    } else {
        int amount;
        fscanf(tiedosto, "%d", &amount);
        fclose(tiedosto);
        return amount;
    }
}

struct Henkilo* haeHenkilot(int amount) {
    FILE *tiedosto = fopen("luettelo.txt", "r");
    if (tiedosto == NULL) {
        return NULL;
    }

    struct Henkilo* henkilot = (struct Henkilo*)malloc(amount * sizeof(struct Henkilo));
    if (henkilot == NULL) {
        fclose(tiedosto);
        return NULL;
    }

    char buffer[100];
    fgets(buffer, sizeof(buffer), tiedosto);
    for (int i = 0; i < amount; i++) {
        fscanf(tiedosto, "%s %s %s", henkilot[i].etunimi, henkilot[i].sukunimi, henkilot[i].puhelinnumero);
    }

    fclose(tiedosto);
    return henkilot;
}

void lisaaHenkilo(struct Henkilo *henkilo){
    FILE *tiedosto = fopen("luettelo.txt", "w+");
    if (tiedosto == NULL){
        printf("Tiedoston avaamisessa tapahtui virhe");
        return;
    }

    int maara = henkiloMaara();
    struct Henkilo *henkilot = haeHenkilot(maara);

    fprintf(tiedosto, "%d\n", maara+1);
    for (int i = 0; i < maara; i++){
        fprintf(tiedosto, "%s %s %s\n", henkilot[i].etunimi, henkilot[i].sukunimi, henkilot[i].puhelinnumero);
    }
    fprintf(tiedosto, "%s %s %s\n", henkilo->etunimi, henkilo->sukunimi, henkilo->puhelinnumero);
    fclose(tiedosto);

    printf("Tietojen tallennus onnistui.");
}
void poistaHenkilo(char *etunimi, char *sukunimi){
    int maara = henkiloMaara();
    struct Henkilo *henkilot = haeHenkilot(maara);

    int uusiMaara = 0;
    int uusiHenkilot[50];
    int loyty = 0;

    for (int i = 0; i < maara; i++){
        if (strcasecmp(henkilot[i].etunimi, etunimi) == 0 && strcasecmp(henkilot[i].sukunimi, sukunimi) == 0){
            uusiHenkilot[i] = -1;
            loyty = 1;
            continue;
        }
        uusiHenkilot[i] = i;
        uusiMaara++;
    }

    if (loyty == 0){
        printf("Etsimääsi henkilöä ei löytynyt luettelosta.");
        return;
    }


    FILE *tiedosto = fopen("luettelo.txt", "w+");
    if (tiedosto == NULL){
        printf("Tiedoston avaamisessa tapahtui virhe");
        return;
    }

    fprintf(tiedosto, "%d\n", uusiMaara);
    for (int i = 0; i < maara; i++){
        if (uusiHenkilot[i] == -1) {
            continue;   
        }
        fprintf(tiedosto, "%s %s %s\n", henkilot[i].etunimi, henkilot[i].sukunimi, henkilot[i].puhelinnumero);
    }
    fclose(tiedosto);

    printf("Tiedot poistettu luettelosta.");
}

int main() {
    char etunimi[20], sukunimi[20];
    printf("Anna etunimi:");
    scanf("%s", etunimi);
    printf("Anna sukunimi:");
    scanf("%s", sukunimi);
    poistaHenkilo(etunimi, sukunimi);

    return 0;
}