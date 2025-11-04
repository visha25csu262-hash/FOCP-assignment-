#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5}, n=5, even[5], odd[5], e=0, o=0;
    for (int i=0; i<n; i++) {
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }
    printf("Even: ");
    for(int i=0; i<e; i++) printf("%d ", even[i]);
    printf("\nOdd: ");
    for(int i=0; i<o; i++) printf("%d ", odd[i]);
    return 0;
}
