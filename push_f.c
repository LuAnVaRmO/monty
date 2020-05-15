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
	if (info.number != NULL && is_a_digit(info.number) == 1)
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
/**
 * is_a_digit - verify if is a number
 * Return: void
 */
int is_a_digit(char *c)
{
	unsigned int i = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		else
			return (1);
	}
	return (0);
}
