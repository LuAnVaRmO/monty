#include "monty.h"
/**
 * free_all - free al the linked list
 * @head: head of the list
 * Return: void
 */
void free_all(stack_t *head)
{
	stack_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	fclose(info.fname);
	free(info.buff);
}
