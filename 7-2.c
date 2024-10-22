#include <stdio.h>

void summa(float eka, float toka);
void erotus(float eka, float toka);
void tulo(float eka, float toka);

int main(){
	while (1==1)
	{
		printf("1: kahden luvun summa\n2: kahden luvun erotus\n3: kahden luvun tulo\n<0: ohjelman lopetus\nValitse laskutoimitus:");
		int mode;
		scanf("%d", &mode);
		if (mode<0){
			printf("Ohjelma lopetetaan...");
			return 0;
		}
		printf("Syötä ensimmäinen luku:");
		float eka;
		scanf("%f", &eka);
		printf("Syötä toinen luku:");
		float toka;
		scanf("%f", &toka);

		switch (mode){
			case 1:
				summa(eka, toka);
				break;
			case 2:
				erotus(eka, toka);
				break;
			case 3:
				tulo(eka, toka);
				break;
			default:
				break;
		}
	}
	return 0;
}

void summa(float eka, float toka){
	printf("%.f+%.f=%.f\n", eka, toka, eka+toka);
}
void erotus(float eka, float toka){
	printf("%.f-%.f=%.f\n", eka, toka, eka-toka);
}
void tulo(float eka, float toka){
	printf("%.f*%.f=%.f\n", eka, toka, eka*toka);
}