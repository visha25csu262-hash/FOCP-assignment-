#include <stdio.h>
int main() {
    int arr[] = {88, 99, 77, 99, 66}, n = 5, found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("First occurrence at index: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) printf("99 not found\n");
    return 0;
}
