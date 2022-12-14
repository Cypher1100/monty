#include "monty.h"

/**
* _pint - function prints the top of the stack
* @head: double pointer to the head of the stack
* @counter: line counter
*
* Return: nothing
*/
void _pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(parabus.file);
		free(parabus.l_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
* _pop - function prints the top of the stack
* @head: double pointer to the head of the stack
* @counter: line counter
*
* Return: nothing
*/
void _pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}


