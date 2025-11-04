#include <stdio.h>
int main() {
    int arr[10] = {1,2,3,4,5}, n=5, pos;
    
    for(int i=0;i<n-1;i++) arr[i] = arr[i+1];
    n--;
    printf("After front delete: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    
    pos = n/2;
    for(int i=pos;i<n-1;i++) arr[i] = arr[i+1];
    n--;
    printf("\nAfter middle delete: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    
    n--;
    printf("\nAfter end delete: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    return 0;
}
