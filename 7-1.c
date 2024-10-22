#include <stdio.h>

void kissa(void);
void koira(void);
void lehma(void);

int main(void){
    int valinta;
    do {
        printf("1:Kissa\n2:Koira\n3:Lehmä\n");
        printf("Lopetus negatiivisella luvulla.\n");
        scanf("%d", &valinta);
        if (valinta < 0){
            printf("Ohjelma lopetetaan...");
        } else if (valinta==1) {
            kissa();
        } else if (valinta==2){
            koira();
        } else if (valinta==3){
            lehma();
        } else {
            printf("Antamasi luku ei kelpaa.\n");
        }
    } while (valinta>0);
    return 0;
}

void kissa()
{
	printf("Kissa sanoo miau!");
}
void koira()
{
	printf("Koira sanoo hau-hau!");
}
void lehma()
{
	printf("Lehmä sanoo ammuu!");
}
