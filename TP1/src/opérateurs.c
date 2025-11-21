#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

int main() {
    int a = 16;
    int b = 3;

    printf("A + B = %d\n", a + b);
    printf("B - A = %d\n", b - a);
    printf("A x B = %d\n", a * b);
    printf("A / B = %d\n", a / b);
    printf("A %% B = %d\n", a % b);
    bool egal = (a == b);
    bool superieur = (a > b);

    printf("a == b : %d\n", egal);    
    printf("a > b  : %d\n", superieur);

    return 0;
}




