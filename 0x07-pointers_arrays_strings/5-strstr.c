#include "main.h"''
#include <string.h>
/**
 * _strstr - prototype
 * @haystack: first pointer par
 * @needle: second pointer parameter
 * Description: finds the first occurrence of the substring needle in the
 * string haystack. The terminating null bytes (\0) are not compared
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
