#include <stdio.h>
int subtract(int x, int y) {
    while (y != 0) {
        unsigned carry = (~x) & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Difference: %d\n", subtract(a, b));
    return 0;
}
