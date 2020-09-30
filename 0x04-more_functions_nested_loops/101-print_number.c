#include <stdio.h>

void primo(void)
{
signed long int a, b;
a = 612852475143;
for (b = (a - 1); b > 1; b--)
{
if (a % b != 0)
continue;
else
{
printf("%ld\n", b);
break;
}
}
}

int main(void)
{
primo();
return (0);
}
