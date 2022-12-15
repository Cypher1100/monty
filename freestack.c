#include "monty.h"

/**
* free_stack - function frees a doubly linked list
* @head: head pointer to the stack
*
* Return: nothing
*/
void free_stack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = t9mp;
	}
}

/**
* _stack - function prints the topelement
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void _stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
 	parabus.lifi = 0;
}
