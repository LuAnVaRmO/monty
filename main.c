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
	ssize_t lines;
	size_t len;
	int line_number = 0;
	stack_t *head = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	info.namestr = argv[1];
	info.fname = fopen(argv[1], "r");
	if (!info.fname)
		pr_er_open(info.namestr);
	while ((lines = getline(&info.buff, &len, info.fname)) != EOF)
	{
		line_number++;
		tokenize();
		if (info.token != NULL && info.token[0] != '#')
		{
			get_op_f(info.token, &head, line_number);
		}
	}
	fclose(info.fname);
	free_all(head);
	return (0);
}
