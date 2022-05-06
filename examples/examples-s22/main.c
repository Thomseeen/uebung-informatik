#include <stdio.h>

#include "lecture_examples.h"
#include "lecture_examples_arrays.h"
#include "lecture_examples_strings.h"

void print_is_alphanumeric(char cc) {
	printf("%c is alphanumeric? -> %s\n", cc, is_alphanumeric(cc) ? "yes" : "no");
}

int main(int argc, char* argv[]) {
	printf("Hello World!\n");

	//lecture1_format_identifier();
	//lecture2_loops();
	//lecture3_strings();

	//examples_arrays5();

	printf("C is alphanumeric? -> %d\n", is_alphanumeric('C'));
	printf("q is alphanumeric? -> %d\n", is_alphanumeric('q'));
	printf("3 is alphanumeric? -> %d\n", is_alphanumeric('3'));
	printf("+ is alphanumeric? -> %d\n", is_alphanumeric('+'));

	print_is_alphanumeric('C');
	print_is_alphanumeric('q');
	print_is_alphanumeric('3');
	print_is_alphanumeric('+');

	print_is_alphanumeric(48);

	printf("\n\nPress ENTER key to continue...\n");
	char _ = getchar();

	return 0;
}