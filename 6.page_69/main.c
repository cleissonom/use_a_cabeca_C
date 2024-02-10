#include <stdio.h>

int main(int argc, char const *argv[])
{
	// seg fault
	// char* cards = "JQK"; // This string can't be modified, because the pointer is pointing
	// to a literal string, located on "constants" memory place.

	char cards[] = "JQK";
	char a_card = cards[2];
	cards[2] = cards[1];
	cards[1] = cards[0];
	cards[0] = cards[2];
	cards[2] = cards[1];
	cards[1] = a_card;
	puts(cards);
	return 0;
}

// If you wanna use a point to a literal string, always use the "const" keyword:
// const char *cards = "some string";

// If you try to modify a const string, the compilation will fail
// error: read-only variable is not assignable