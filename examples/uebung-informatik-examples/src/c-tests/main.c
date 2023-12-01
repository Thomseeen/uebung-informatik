#include <stdio.h>



float average(int values[], int values_cnt) {
    int sum = 0;

    for (int i = 0; i < values_cnt; i++) {
        sum += values[i];
    }

    return (float)sum / values_cnt;
}

int test(int arr[]) {
    return sizeof(arr);
}

int main() {
    int arr[] = { 0 , 1 , 2 };

    printf("Test1: %d\n", sizeof(arr));
    printf("Test2: %d\n", test(arr));

    float avg = average(arr, 3);

    int foo = 0;
    foo = 1;

    printf("result is: %f\n", avg);

    printf("\nPress ENTER to Continue\n");
    int ch = getchar();

    return 0;
}