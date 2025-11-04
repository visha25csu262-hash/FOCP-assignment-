#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) if (n % i == 0) return 0;
    return 1;
}
int main() {
    int arr[] = {2,3,4,5,8}, n=5, count=0;
    for(int i=0;i<n;i++)
        if(isPrime(arr[i])) count++;
    printf("Prime count: %d\n", count);
    return 0;
}
