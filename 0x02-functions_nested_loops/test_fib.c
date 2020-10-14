#include <stdio.h>
#include "holberton.h"

void fibonacci(void) {
  unsigned int a, fib, fib_ant, fib2;
  fib = 1;
  fib_ant = 0;
  for (a = 0; a <= 52; a++)
    {
      //8     5       3
      fib2 = fib + fib_ant;
      printf("%u", fib2);
      fib_ant = fib;
      fib = fib2;
      if(a != 52)
	{
	  printf(", ");
	}

    }

}

int main(void)
{
  fibonacci();
  return(0);
}
