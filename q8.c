#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d %d", first, second);
    for(int i = 2; i < n; i++) {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }
    return 0;
}
