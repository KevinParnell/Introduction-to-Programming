#include <stdio.h>
#include <stdlib.h>

int main() {
    float degreeC; // Celsius
    float degreeF; // Farenheit
    float degreeK; // Kelvin
    int choice; // The number the user enters
    printf("Please enter the degrees in Kelvin \n");
    scanf("%f", &degreeK);

    degreeC = degreeK - 273.2;
    degreeF = 9.0/5 * degreeC + 32;

    printf("Enter 1 for degrees in Celsius, or 2 for degrees in Farenheit\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("%f\n", degreeC);
    }

    if(choice == 2) {
        printf("%f\n", degreeF);
    }

    return 0;
}