#include <stdio.h>
int main() {
    int arr[] = {1,2,3,2,3,4,5,1,6}, n=9, dup=0;
    printf("Duplicates: ");
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                printf("%d ", arr[i]);
                dup=1;
                break;
            }
        }
    }
    if (!dup) printf("-1");
    printf("\n");
    return 0;
}
