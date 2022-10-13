#include "function_pointers.h"
#include "3-op_functions.c"
/**
 * get_op_func - prototype
 * @s: par
 * Description:  selects the correct function to perform the operation
 * asked by the user.
 * Return: func
 */
int (*get_op_func(char *s))(int, int)
{
	void r;
	char s1[6] = "+-*/%";

	if (s == NULL)
		r = NULL;

	s = s1;
	*(s + 0) ? r = (op_add(int , int)) : ;
	*(s + 1) ? r = (op_sub(int, int)) : ;
	*(s + 2) ? r = (op_mul(int, int)) : ;
	*(s + 3) ? r = (op_div(int, int)) : ;
	*(s + 4) ? r = (op_mod(int, int)) : ;
	return (r);
}
