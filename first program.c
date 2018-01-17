#include <stdlib.h>
#include <stdio.h>

int main() {
    float x, y; // This is the input for USD

    printf("This program will calculate the conversion rate US Dollars to Canadian Dollars.\n"); // Makes program more human
    printf("Please enter the amount of money you would like to convert\n");
    scanf("%f", &x); // Allows input for the float
    y = 1.0960;
    printf("The amount you entered is equal to %f Canadian Dollars\n", x*y); // Reads the amount in a human way

    return 0;
}