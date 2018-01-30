#include <stdio.h>
#include <stdlib.h>

int main() {
    float temp;

    printf("Please enter the temperature\n");
    scanf("%f", &temp);

    if (temp >= 80) {
        printf("The activity we're doing today is swimming\n");
    }
    if (temp >= 60 && temp <= 80) {
        printf("The activity we're doing today is soccer\n");
    }
    if (temp >= 40 && temp <= 60) {
        printf("The activity we're doing today is volleyball\n");
    }
    if (temp < 40) {
        printf("The activity we're doing today is skiing\n");
    }

    return 0;
}