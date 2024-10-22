#include <stdio.h> 

int main(void)
{
	printf("Juotko kahvia vai teetä (k/t)?");
	char chosenDrink = getchar();
	int amount;
	printf("Montako kuppia juot päivässä:");
	scanf("%d", &amount);

	char *drink = NULL;
	if (chosenDrink == 'k') 
	{
		drink = "kahvia";
	} else
	{
		drink = "teetä";
	}

	if (amount < 3)
	{
		printf("Et taida juoda paljoa %s.", drink);
	} else if (amount < 21) 
	{
		printf("Juotpa paljon %s!", drink);
	} else 
	{
		printf("Ohjelmassa tapahtunut virhe!");
	}
	return 0;
}