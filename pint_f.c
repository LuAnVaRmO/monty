#include "monty.h"
/**
 * _pint_f - prints the value at the top of the stack
 * @head: head of stack
 * @line_number: Number of the current line
 * Return: void
 */
void _pint_f(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	temp = *head;

	if (*head == NULL || head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
