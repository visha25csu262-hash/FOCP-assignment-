#include <stdio.h>
void toBinary(int n) {
    int bin[32], i = 0;
    while(n) {bin[i++] = n%2; n /= 2;}
    for(int j=i-1;j>=0;j--) printf("%d", bin[j]);
}
int toDecimal(int n) {
    int dec = 0, base = 1;
    while(n) {dec += (n%10) * base; n /=10; base *= 2;}
    return dec;
}
int main() {
    int choice, num;
    printf("1. Dec->Bin 2. Bin->Dec\nEnter choice: ");
    scanf("%d",&choice);
    printf("Enter number: ");
    scanf("%d",&num);
    if(choice == 1) toBinary(num);
    else printf("%d", toDecimal(num));
    return 0;
}
