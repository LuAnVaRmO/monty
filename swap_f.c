#include "monty.h"
/**
 * _swap_f - swap the position of 2 elements of stakc
 * @head: head of stack
 * @line_number: Number of the current line
 * Return: Nothing it is a void function
 */
void _swap_f(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	int i = 0, tmp1 = 0, tmp2 = 0;

	temp = *head;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (i < 2)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp1 = *head->n;
	tmp2 = (*head->next)->n;
	head->n = tmp2;
	(*head->next)->n = tmp1;	
}