#include "monty.h"
/**
 * tokenize - convert string on intems of an array
 * Return: array of strings
 */
void tokenize(void)
{
	info.token = strtok(info.buff, DELIMITERS);
	info.number = strtok(NULL, DELIMITERS);
}
/**
 * open_file - open a file
 * @filename: name of the file
 * Return: void
 */
void open_file(char *filename)
{
	ssize_t lines;
	size_t len = 0;
	int line_number = 0;
	stack_t *head = NULL;

	info.fname = fopen(filename, "r");

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
		free(info.buff);
	}
	fclose(info.fname);
	free_all(head);
}
