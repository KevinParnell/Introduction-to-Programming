#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("Please enter your age (18-55 only)\n");
    scanf("%d", &age);

    // Will detect the age and see if it is accepted or not
    if (age >= 18 && age <= 55) {
        printf("Transaction accepted\n");
    }
    else {
        printf("Transaction not accepted\n");
    }

    return 0;
}