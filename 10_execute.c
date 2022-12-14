#include "monty.h"

/**
* execute - function executes the monty opcode
* @stack: head stack of the linked list
* @counter: line counter
* @file: pointer to the monty file
* @content: line content
*
* Return: nothing
*/
int execute(char *l_content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"sub", _sub},
				{"div", _div},
				{"mul", _mul},
				{"mod", _mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", _rotl},
				{"rotr", _rotr},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *input;

	input = strtok(l_content, " \n\t");
	if (input && input[0] == '#')
		return (0);
	parabus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && input)
	{
		if (strcmp(input, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (input && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(l_content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
