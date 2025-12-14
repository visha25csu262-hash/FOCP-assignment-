#include <stdio.h>
int main() {
    int arr[] = {1,3,20,4,1,0}, n=6;
    for(int i=0; i<n; i++) {
        if((i==0 || arr[i]>=arr[i-1]) && (i==n-1 || arr[i]>=arr[i+1])) {
            printf("Peak element: %d (Index %d)\n", arr[i], i);
        }
    }
    return 0;
}
