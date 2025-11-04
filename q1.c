#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if(sum == n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
