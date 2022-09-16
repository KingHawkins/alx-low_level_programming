#include<unistd.h>
/**
 * _putchar - prototype
 * @c: parameter
 *
 * Description: function protorype
 * Return: 0 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
