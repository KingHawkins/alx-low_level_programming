#include "main.h"
#include <string.h>
/**
 * rev_string - prototype
 * @s: parameter
 * Description: prints character in reverse
 */
void rev_string(char *s)
{
	int i;
	char t;

	for (i = 0; i < strlen(s) / 2; i++)
	{
		t = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = t;
	}
}
