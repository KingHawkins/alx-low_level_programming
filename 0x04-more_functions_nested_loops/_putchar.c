#include <unistd.h>
/*
 * _putchar -prints character
 * @c: parameter
 * Return: 1 if success
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
