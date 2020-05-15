#include "monty.h"
/**
 * _pop_f - remove to the stack
 * @head: head of stack
 * @line_number: Number of the current line
 * Return: void
 */
void _pop_f(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;

	temp = *head;

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*head = temp->next;
	if (temp->next)
		temp->prev = NULL;
	free(temp);
}
