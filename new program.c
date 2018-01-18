#include <stdio.h>
#include <stdlib.h>

int main() {
    int var;
    printf("Please enter 1 or 2\n");
    scanf("%d", &var);

    if (var == 1) {
        printf("RED\n");
        printf("Now exiting...\n");
    }
    if (var ==2)
    printf("GREEN\n");

    return 0;
}