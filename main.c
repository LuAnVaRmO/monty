#include "monty.h"
globvar info = {NULL, NULL, NULL, NULL, NULL};
/**
 * main - entry point
 * @argc: size of args
 * @argv: arguments
 * Return: void
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	info.namestr = argv[1];
	open_file(info.namestr);

	exit(EXIT_SUCCESS);
}
