#include <stdio.h>

int main(void) {
    int a;
    scanf ("%d",&a);
    if ( a > 6 ) {
        printf("Please enter the number less than 6");
        return 1;
    }
    int i, j, k;
    i = a + 1;
    j = a + 2;
    k = a + 3;
    printf("%d %d %d %d", a, i, j, k);
    return 0;
}