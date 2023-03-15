/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the
main() function.

Do not change the code given in the main() function when you are implementing
your solution.*/

#include <stdio.h>

int minimum(int x, int y);
int maximum(int x, int y);
int multiply(int x, int y);

int main() { // function main begings program execution

  int no1, no2; // declaring variables

  printf("Enter a value for no 1 : "); // prompt
  scanf("%d", &no1);
  printf("Enter a value for no 2 : "); // prompt
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));  // display min number
  printf("%d ", maximum(no1, no2));  // display max number
  printf("%d ", multiply(no1, no2)); // display multiplication

  return 0;
} // end function main

int minimum(int x, int y) { // minimum function
  if (x < y)                // end if
    return x;
  else
    return y; // end else
}

int maximum(int x, int y) { // maximum function
  if (x > y)
    return x; // end if
  else
    return y; // end else
}

int multiply(int x, int y) { return x * y; } // multiply function
