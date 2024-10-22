#include <stdio.h>

int main(void)
{
	printf("Anna kokonaisluku:");
	int luku;
	scanf("%d", &luku);
	for (int i = 1; i < luku+1; i++)
	{
		printf("%d\n", i);
	}
}