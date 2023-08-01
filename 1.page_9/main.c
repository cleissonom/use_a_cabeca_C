#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char card_name[3];
	puts("Enter the card_name: ");
	scanf("%2s", card_name);

	int val = 0;

	if (strcmp(card_name, "K") == 0)
	{
		val = 10;
	}
	else if (strcmp(card_name, "Q") == 0)
	{
		val = 10;
	}
	else if (strcmp(card_name, "J") == 0)
	{
		val = 10;
	}
	else if (strcmp(card_name, "A") == 0)
	{
		val = 11;
	}
	else
	{
		val = atoi(card_name);
	}

	printf("The card value is: %i\n", val);
	return 0;
}
