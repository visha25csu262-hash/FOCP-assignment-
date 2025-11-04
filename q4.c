#include <stdio.h>

void swap1(int *a, int *b) {*a = *a + *b; *b = *a - *b; *a = *a - *b;}

void swap2(int *a, int *b) {*a = *a ^ *b; *b = *a ^ *b; *a = *a ^ *b;}

void swap3(int *a, int *b) {int *temp = a; a = b; b = temp;}

void swap4(int *a, int *b) {int temp = *a; *a = *b; *b = temp;}
int main() {
    int a = 5, b = 10;
    swap1(&a, &b);
    printf("After swap1: %d %d\n", a, b);
    swap2(&a, &b);
    printf("After swap2: %d %d\n", a, b);
    swap4(&a, &b);
    printf("After swap4: %d %d\n", a, b);
    return 0;
}
