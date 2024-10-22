#include <stdio.h>

int main(void) 
{
	printf("1: vähennyslasku\n2: yhteenlasku\n3: kertolasku\nValitse toiminto:");
	int input;
	scanf("%d", &input);
	printf("Anna eka luku:");
	int first;
	scanf("%d", &first);
	printf("Anna toka luku:");
	int second;
	scanf("%d", &second);
	
	switch(input)
	{
		case 1:
			printf("%d-%d=%d", first, second, first-second);
			break;
		case 2:			
			printf("%d+%d=%d", first, second, first+second);
			break;
		case 3:
			printf("%d*%d=%d", first, second, first*second);
			break;
		default:
			printf("Tuntematon laskukaava.");
			break;
	}

}