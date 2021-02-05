#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main: entry main
 *description: the program takes a random number and display 
 *if it is greater than 5, is 0 or 
 *is less than 6 and not 0
 *return: 0
 */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if ((n % 10) == 0)
    printf("Last digit of %d is %d and is 0\n", n, n % 10);
  else if ((n % 10) > 5)
    printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
  else
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

  return (0);
}
