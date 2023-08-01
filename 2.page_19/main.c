#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int get_card_name(char *card_name)
{
	puts("Enter the card_name: ");
	scanf("%s", card_name);

	if (strlen(card_name) > 2)
	{
		fprintf(stderr, "\033[1;31mError\033[3;37m: card_name must have at most 2 characters.\n");
		return -1;
	}

	return 0;
}

struct CardMapping
{
	char name[3];
	int value;
};

struct CardMapping card_map[] = {
	{"K", 10},
	{"Q", 10},
	{"J", 10},
	{"A", 11}};

int compare_card_names(const char *card_name, const char *mapped_name)
{
	return (tolower(card_name[0]) == tolower(mapped_name[0])) && (tolower(card_name[1]) == tolower(mapped_name[1]));
}

int get_card_value(const char *card_name)
{
	int num_cards = sizeof(card_map) / sizeof(card_map[0]);

	for (int i = 0; i < num_cards; i++)
	{
		if (compare_card_names(card_name, card_map[i].name))
		{
			return card_map[i].value;
		}
	}

	return atoi(card_name);
}

int main(void)
{
	char card_name[3];

	if (get_card_name(card_name) == -1)
		return 1;

	const int value = get_card_value(card_name);
	if (value >= 3 && value <= 6)
		puts("Count has gone up");
	else if (value == 10)
		puts("Count has gone down");

	return 0;
}
