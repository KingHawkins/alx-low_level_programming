#include "main.h"
/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: null terminated string to write string
 * Description: creates a file
 * Return: 0 if success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, 
