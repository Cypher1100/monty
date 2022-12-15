#include "monty.h"

/**
* _rotl- function rotates the stack to the top
* @head: head of the stack
* @counter: line counter
*
* Return: nothing
*/
void _rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *extra;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	extra = (*head)->next;
	extra->prev = NULL;
	while (temp->next != NULL)
	{
		temp = tmp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = extra;
}
