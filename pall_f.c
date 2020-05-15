#include "monty.h"
/**
 * _pall_f - print all the stack
 * @head: head of the  list
 * @line_number: number of the line
 */
void _pall_f(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head;
	(void) line_number;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
