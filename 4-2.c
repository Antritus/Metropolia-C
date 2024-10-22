#include <stdio.h>

int main(void) 
{
	int jaettava;
	printf("Anna kokonaisluku:");
	scanf("%d", &jaettava);
	printf("Luku on %d", jaettava % 2);
}