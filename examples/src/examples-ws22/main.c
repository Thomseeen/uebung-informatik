#include <stdio.h>

#include "lecture_examples1.h"


#define SIZE 5

int main(int argc, char* argv[]) {
    printf("size of int %llu bytes\n", sizeof(int));

    char a = 50;
    char b = '1';

    printf("%c", a); // 2
    printf("%d", a); // 50
    printf("%c", b); // 1
    printf("%d", b); // 49

    char c_arr[] = { 'a', 49 };
    char c_arr2[] = { 'a', 49, '\0' };
    int i_arr[3] = { 'a', 0 };

    printf("%c", c_arr[1]);
    printf("%d", i_arr[2]);

    char s_arr[100] = "hello";
    char arr;

    scanf_s("%s", s_arr, 6);
    scanf_s("%c", &s_arr[0], 1);
    printf("%s", s_arr[1]);

    return 0;
}