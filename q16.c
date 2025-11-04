#include <stdio.h>
int main() {
    int arr[10] = {1,2,3,4,5}, n = 5, pos = 2, val = 10;
    
    for(int i = n; i > 0; i--) arr[i] = arr[i-1];
    arr[0] = val; n++;
    printf("After front insert: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    
    pos = n/2;
    for(int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = 20; n++;
    printf("\nAfter middle insert: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    
    arr[n++] = 30;
    printf("\nAfter end insert: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    return 0;
}
