#include <stdio.h>
/**
 *main: entry point
 *description: print fizz
 *return: fizzbuzz
 */

void print_fizz(void)
{
	int i;
	for(i = 1; i <= 100; i++)
	{
		if(i % 3 == 0 && i % 5 == 0 )
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		}
		else if(i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			continue;
		}
		else if(i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			continue;
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
}

int main()
{
	print_fizz();
	return 0;
}
