#include <stdio.h>
/**
 * main - Entry point
 *
 * a program that prints all the
 * numbers of base 16 in lowercase
 *
 * Return: 0 Success
 */
int main(void)
{
char base_16;

for (base_16 = 48; base_16 <= 57; base_16++)
{
putchar(base_16);
}

for (base_16 = 97; base_16 <= 102; base_16++)
{
putchar(base_16);
}
putchar('\n');

return (0);

}