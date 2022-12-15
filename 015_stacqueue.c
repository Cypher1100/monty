#include "monty.h"

/**
* _queue - function prints the element at the top of the queue
* @head: head of the queue
* @counter: line counter
*
* Return: nothing
*/
void _queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	parabus.lifi = 1;
}

/**
* addqueue - function adds a  newnode to the tail the queue
* @n: new value
* @head: head of the queue
*
* Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *newnode, *tmp;

	tmp = *head;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnnode->n = n;
	newnode->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		tmp->next = newnode;
		newnode->prev = tmp;
	}
}
