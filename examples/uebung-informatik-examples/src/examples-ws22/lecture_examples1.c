#include <stdio.h>

#define SIZE 3

void format_identifier() {
    signed char sc;
    unsigned char uc;

    signed short ss;
    unsigned short us;

    signed int si;
    unsigned int ui;

    signed long sl;
    unsigned long ul;

    signed long long sll;
    unsigned long long ull;

    float ff;
    double dd;

    scanf_s("%hhi", &sc);
    scanf_s("%hhu", &uc);

    scanf_s("%hi", &ss);
    scanf_s("%hu", &us);

    scanf_s(" %i", &si);
    scanf_s(" %u", &ui);

    scanf_s("%li", &sl);
    scanf_s("%lu", &ul);

    scanf_s("%lli", &sll);
    scanf_s("%llu", &ull);

    scanf_s("%f", &ff);
    scanf_s("%lf", &dd);

    printf("%hhi\n", sc);
    printf("%hhu\n", uc);

    printf("%hi\n", ss);
    printf("%hu\n", us);

    printf("%i\n", si);
    printf("%u\n", ui);

    printf("%li\n", sl);
    printf("%lu\n", ul);

    printf("%lli\n", sll);
    printf("%llu\n", ull);

    printf("%f\n", ff);
    printf("%lf\n", dd);
}

void loops() {
    /*
     * 1. {0} setzt immer alle Array-Elemente auf 0, egal wie viele Elemente das
     * eigentliche Array hat.
     *
     * 2. SIZE kommt aus der Praeprozessor-Direktive #define SIZE 3. Diese fungiert
     * als schlichte "Text-Template", die vor der eigentlichen Kompilierung durch
     * den angegebenen Wert, hier 3, ersetzt wird.
     */
    int arr[SIZE] = { 0 };

    // ----- While-Loop variant -----
    printf("\n----- WHILE -----");

    int idx_while = 0;
    while (idx_while < SIZE) {
        printf("\nEnter number %d: ", idx_while);
        scanf_s("%d", &arr[idx_while++]);
    }

    idx_while = 0;
    while (idx_while < SIZE) {
        printf("Number %d is %d\n", idx_while, arr[idx_while++]);
    }

    // ----- Do-While-Loop variant -----
    printf("\n----- DO WHILE -----");
    int idx_dowhile = 0;
    do {
        printf("\nEnter number %d: ", idx_dowhile);
        scanf_s("%d", &arr[idx_dowhile++]);
    } while (idx_dowhile < SIZE);

    idx_dowhile = 0;
    do {
        printf("Number %d is %d\n", idx_dowhile, arr[idx_dowhile++]);
    } while (idx_dowhile < SIZE);

    // ----- For-Loop variant -----
    printf("\n----- FOR -----");
    for (int idx_for = 0; idx_for < SIZE; idx_for++) {
        printf("\nEnter number %d: ", idx_for);
        scanf_s("%d", &arr[idx_for]);
    }

    for (int idx_for = 0; idx_for < SIZE; idx_for++) {
        printf("Number %d is %d\n", idx_for, arr[idx_for]);
    }
}