#include "monty.h"
/**
 * get_op_f - get the function of the file
 * @tok: string with the command
 * @h: head of double pointer of linked list
 * @line_number: line number
 * Return: void
 */
void get_op_f(char *tok, stack_t **h, int line_number)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", _push_f},
		{"pall", _pall_f},
		{"pint", _pint_f},
		{"pop", _pop_f},
		{"swap", _swap_f},
		{"nop", _nop_f},
		{"add", _add_f},
		{NULL, NULL}
	};
	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, tok) == 0)
		{
			ops[i].f(h, line_number);
			return;
		}
		i++;
	}
	if (ops[i].opcode == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", line_number, tok);
		free_all(*h);
		exit(EXIT_FAILURE);
	}
}
