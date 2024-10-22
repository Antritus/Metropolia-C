#include <stdio.h>

int main(void)
{
	printf("Anna kokonaisluku:");
	int luku;
	scanf("%d", &luku);
	int n = 0;
	int loppu = 1;
	while (n<luku){
		n++;
		loppu = loppu*n;
//		printf("%d\n", n);
	}
	printf("Luvun %d kertoma on %d", luku, loppu);
	
	return 0;
}