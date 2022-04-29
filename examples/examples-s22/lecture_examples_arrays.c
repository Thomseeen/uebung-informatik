#include <stdio.h>
#include <stdlib.h>

void examples_arrays1() {
	int aa = 0;
	int bb = 0;
	int cc = 0;
	int dd = 0;

	scanf_s(" %d", &aa);
	scanf_s(" %d", &bb);
	scanf_s(" %d", &cc);
	scanf_s(" %d", &dd);
}

void examples_arrays2() {
	int aa = 0;
	int bb = 0;
	int cc = 0;
	int dd = 0;

	for (int ii = 0; ii < 4; ii++) {
		scanf_s(" %d", &aa); // ?!
	}
}

void examples_arrays3() {
	int my_array[4] = { 0 };

	for (int ii = 0; ii < 4; ii++) {
		scanf_s(" %d", &my_array[ii]);
	}
}

void examples_arrays4() {
	// ACHTUNG: Dieser Code ist unsicher!

	FILE* fp;
	long flen;
	char buffer[1024] = { 0 };

	if (fopen_s(&fp, "C:\\tmp\\my_test_file.txt", "rb")) {
		printf("Error opening file");
		return;
	}

	if (fseek(fp, 0, SEEK_END)) {
		printf("Error seeking file end");
		return;
	}

	flen = ftell(fp);

	rewind(fp);

	fread(buffer, flen, 1, fp);
	fclose(fp);

	printf("%s", buffer);
}

void examples_arrays5() {
	FILE* fp;
	long flen;
	char* buffer;

	if (fopen_s(&fp, "C:\\tmp\\my_test_file.txt", "rb")) {
		printf("Error opening file");
		return;
	}

	if (fseek(fp, 0, SEEK_END)) {
		printf("Error seeking file end");
		return;
	}

	flen = ftell(fp);

	rewind(fp);

	buffer = (char*)malloc(flen * sizeof(char));
	if (buffer == NULL) {
		printf("Error allocationg memory");
		return;
	}

	fread(buffer, flen, 1, fp);
	fclose(fp);

	printf("%s", buffer);
	free(buffer);
}