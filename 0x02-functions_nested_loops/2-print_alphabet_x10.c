#include "main.h"

/**
 * main - print_alphabet_x10
 * Description: prints out the alphabet
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
char i;
int x;
x = 0;

while (x < 10)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
x++;
}
}
