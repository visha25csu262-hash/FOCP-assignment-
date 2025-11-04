#include <stdio.h>
int main() {
    int arr[] = {88, 99, 77, 99, 66}, n = 5, count = 0;
    printf("Indexes: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal students with 99: %d\n", count);
    return 0;
}
