/********************************************/
/* Kevin Parnell, 6174                      */
/* Jan 16, 2018.                            */
/* Filename: hello.c                        */
/* This program prints out the message:     */
/* Hello World! on the screen.              */
/********************************************/
#include <stdlib.h>
#include <stdio.h>

int main()
{
      float x, y;
      
      printf("Please enter two float numbers\n");
      scanf("%f", &x);
      scanf("%f", &y);
      
      printf("The summation is: %f\n", x + y);
      printf("The difference is: %f\n", x - y);
      printf("The multiplication is: %f\n", x*y);
      printf("The division is: %f\n", x/y);
      
      return 0;
}
