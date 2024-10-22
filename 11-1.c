#include <stdio.h>
#include <stdlib.h>

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

int main() {
    struct Henkilo henkilo;

    printf("Anna etunimi:");
    scanf("%s", henkilo.etunimi);
    printf("Anna sukunimi:");
    scanf("%s", henkilo.sukunimi);
    printf("Anna puhelinnumero:");
    scanf("%s", henkilo.puhelinnumero);

    lisaaHenkilo(&henkilo);
    
    return 0;
}