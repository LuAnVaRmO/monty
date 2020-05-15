#include "monty.h"
/**
 * _push_f - push an element to stack
 * @head: head of stack
 * @line_number: Number of the current line
 * Return: Nothing it is a void function
 */
void _push_f(stack_t **head, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
	{
		free(new);
		pr_er_malloc();
	}
	if (_isdigit(info.number) == 1)
	{
		new->n = atoi(info.number);
		new->prev = NULL;
		new->next = *head;
		if (*head)
			(*head)->prev = new;
		*head = new;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		free_all(*head);
		free(new);
		exit(EXIT_FAILURE);
	}

}
