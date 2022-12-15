#include "monty.h"

/**
* _rotr - function rotates the stack to the bottom
* @head: stack head of the stack
* @counter: line count
*
* Return: nothing
*/
void _rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tobottom;

	tobottom = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (tobottom->next)
	{
		tobottom = tobottom->next;
	}
	tobottom->next = *head;
	tobottom->prev->next = NULL;
	tobottom->prev = NULL;
	(*head)->prev = tobottom;
	(*head) = tobottom;
}
