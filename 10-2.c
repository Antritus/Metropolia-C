#include <stdio.h>

int main(void) {
	printf("Ohjelma laskee vokaalien määriä.\n");
	printf("Anna sana:");
	char sana[15];
	scanf("%15s[a-z]", sana);
	
	char vokaalit[] = {'a', 'e', 'i', 'o', 'y', 'u', 'ä', 'ö', 'å'};
	
	int vokaalejaLoydetty = 0;
	int i = 0;
	while (sana[i] != '\0') {
		for (int j = 0; j < 9; j++) {
			if (sana[i] == vokaalit[j]){
				vokaalejaLoydetty++;
			}
		}
		i++;
	}
	printf("Sanassa vokaaleja: %d", vokaalejaLoydetty);
	
	return 0;
}