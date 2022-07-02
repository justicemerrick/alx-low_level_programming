#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

printf("size of a char: %d byte(s)\n", sizeof(c));
printf("size of an int: %d byte(s)\n", sizeof(i));
printf("size of a long int: %d byte(s)\n", sizeof(l));
printf("size of a long long int: %d byte(s)\n", sizeof(ll));
printf("size of float: %d byte(s)\n", sizeof(d));

return (0);
}
