#include <stdio.h>
#include <stdlib.h>

#include "lecture_examples_strings.h"

#define ARRAY_SIZE 10
#define MAX_STRING_SIZE 255

void examples_strings1() {
	char char_array[ARRAY_SIZE];

	for (int ii = 0; ii < ARRAY_SIZE; ii++) {
		printf("Enter char %d: ", ii);
		scanf_s(" %c", &char_array[ii], 1);
	}

	for (int ii = 0; ii < ARRAY_SIZE; ii++) {
		printf("Char %d: %c\n", ii, char_array[ii]);
	}
}

void examples_strings2() {
	char char_array[MAX_STRING_SIZE];

	printf("Enter string: ");
	scanf_s("%s", char_array, MAX_STRING_SIZE);

	for (int ii = 0; ii < MAX_STRING_SIZE; ii++) {
		printf("Char %d: %c\n", ii, char_array[ii]);
	}
}

void examples_strings3() {
	char char_array[MAX_STRING_SIZE];

	for (int ii = 0; ii < MAX_STRING_SIZE; ii++) {
		printf("Enter char %d (anything non alphanumeric stops reading): ", ii);
		scanf_s(" %c", &char_array[ii], 1);

		if (!((char_array[ii] >= '0' && char_array[ii] <= '9') ||
			(char_array[ii] >= 'a' && char_array[ii] <= 'z') ||
			(char_array[ii] >= 'A' && char_array[ii] <= 'Z'))) {

			char_array[ii] = '\0';
			break;
		}
	}

	printf("String: %s\n", char_array);
}

void examples_strings4() {
	char char_array[MAX_STRING_SIZE];

	printf("Enter string: ");
	scanf_s("%s", char_array, MAX_STRING_SIZE);

	for (int ii = 0; char_array[ii] != '\0'; ii++) {
		printf("Char %d: %c\n", ii, char_array[ii]);
	}
}

void examples_strings5() {
	char char_array[MAX_STRING_SIZE];

	printf("Enter string: ");
	scanf_s("%s", char_array, MAX_STRING_SIZE);

	printf("String: %s\n", char_array);
}

int is_alphanumeric(char cc) {
	return (cc >= '0' && cc <= '9') ||
		(cc >= 'a' && cc <= 'z') ||
		(cc >= 'A' && cc <= 'Z');
}
