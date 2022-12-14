#include "monty.h"

/**
* _push - function adds a newnode to the stack
* @head: double pointer to the head of the stack
* @counter: line count
*
* Return: nothing
*/
void _push(stack_t **head, unsigned int counter)
{
	int i, idx = 0, flag = 0;

	if (parabus.arg)
	{
		if (parabus.arg[0] == '-')
			idx++;
		for (; parabus.arg[idx] != '\0'; idx++)
		{
			if (parabus.arg[idx] > 57 || parabus.arg[idx] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(parabus.file);
			free(parabus.l_content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(parabus.file);
		free(parabus.l_content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	i = atoi(parabus.arg);
	if (parabus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
