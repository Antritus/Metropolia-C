#include <stdio.h>

int main(void) 
{
	int ekaLuku, tokaLuku;
	printf("Anna eka luku:");
	scanf("%d", &ekaLuku);
	printf("Anna toka luku:");
	scanf("%d", &tokaLuku);
	printf("\n");
	printf("%d+%d=%d\n",ekaLuku, tokaLuku, ekaLuku+tokaLuku);
	printf("%d-%d=%d\n",ekaLuku, tokaLuku, ekaLuku-tokaLuku);
	printf("%d*%d=%d\n",ekaLuku, tokaLuku, ekaLuku*tokaLuku);
}