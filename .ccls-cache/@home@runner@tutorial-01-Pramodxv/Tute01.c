/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main(void) { // function main begings program execution

  float mark1, mark2, sum; // declaring variables

  printf("Enter the mark 01 : "); // prompt
  scanf("%f", &mark1);

  printf("Enter the mark 02 : "); // prompt
  scanf("%f", &mark1);

  sum = mark1 + mark2; // calculation

  printf("Average   :   %.2f", sum / 2); // display average

  return 0;
} // end function main
