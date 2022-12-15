#include "monty.h"

/**
* _pchar - function prints the character at the top of the stack,
* followed by a new line
* @head: head of the stack
* @counter: line counter
*
* Return: nothing
*/
void _pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(parabus.file);
		free(parabus.l_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(parabus.file);
		free(parabus.l_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
