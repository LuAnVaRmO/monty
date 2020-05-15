#include "monty.h"
/**
 * pr_er_open - print error to open file
 * @name: name of the file
 * Return: void
 */
void pr_er_open(char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't open file <%s>\n", name);
	exit(EXIT_FAILURE);
}
/**
 * pr_er_malloc - print error from malloc
 * Return: void
 */
void pr_er_malloc(void)
{
	dprintf(STDERR_FILENO, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
