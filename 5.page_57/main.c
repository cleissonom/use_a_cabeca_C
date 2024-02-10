#include <stdio.h>

int main(int argc, char const *argv[])
{
	int contestants[] = {1, 2, 3};
	int *choice = contestants;

	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;

	printf("I'm going to pick contestant number %i\n", contestants[2]);
	return 0;
}

// array[2] == *(array + 2) == *(2 + array) == 2[array]

// char name[40];
// printf("Enter your name: ");
// scanf("%39s", name);

// int age;
// printf("Enter your age: ");
// scanf("%i", &age);

// char first_name[20];
// char last_name[20];
// printf("Enter first and last name: ");
// scanf("%19s %19s", first_name, last_name);
// printf("First: %s Last: %s\n", first_name, last_name);

// char food[5];
// printf("Enter favorite food: ");
// fgets(food, sizeof(food), stdin);
// printf("Your favorite food is: %s\n", food);