#include "lists.h"
#include<stddef.h>
#include <stdio.h>
/**
 * print - prottotype
 * Description: prints You're beat! and yet, you must allow,\nI bore my house
 * upon my back!\n before the main function is executed.
 */
void __attribute__ ((constructor)) print(void)
{
	printf("You're beat! and yet, you must allow, ");
	printf("I bore my house upon my back!\n");
}
