#include <stdio.h>
/**
 * main - Emtry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
for (abc = 'A'; abc <= 'Z'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
