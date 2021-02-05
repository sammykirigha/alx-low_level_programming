#include<stdio.h>

/**
 *main: entry point
 *description a program that prints lowercase then uppercase
 *return 0
 */

int main(void)
{
  char letter = 'a';

  while (letter <= 'z')
  {
   putchar(letter);
   letter++;
  }

 char lettertwo ='A'

  while (lettertwo <= 'Z')
  {
   putchar(lettertwo);
   lettertwo++
  }

  putchar('\n');
  return (0);
}
