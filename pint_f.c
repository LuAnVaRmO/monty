#include "monty.h"
/**
 * _pint_f - prints the value at the top of the stack
 * @head: stack
 * @line_number: number of the line
 * Return: void
 */
void _pint_f(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int value;

	temp = *head;
	value = temp->n;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", value);
}
