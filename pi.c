#include <stdlib.h>
#include <stdio.h>

int main() {
    float r, area, circum, diam;

    printf("Enter a circle radius value\n");
    scanf("%f", &r);
    area = 3.14*r*r;
    circum = 2*r*3.14;
    diam = 2*r;
    printf("The area is %f, the diamater is %f, the circumference is %f", area, diam, circum);

    return 0;
}