#include <stdio.h>
int main() {
    int rows = 5, val;
    for(int i=1;i<=rows;i++) {
        val = i % 2 == 0 ? 1 : 0;
        for(int j=1;j<=i;j++) {
            printf("%d", val);
            val = 1 - val;
        } printf("\n");
    }
    return 0;
}
