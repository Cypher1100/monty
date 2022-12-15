#include "monty.h"
#define _GNU_SOURCE

parameters parabus = {NULL, NULL, NULL, 0};

/**
* main - the main function for monty code interpreter
* @argc: argument count
* @argv: argument value
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *l_content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	parabus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		l_content = NULL;
		read_line = getline(&content, &size, file);
		parabus.l_content = l_content;
		counter++;
		if (read_line > 0)
		{
			execute(l_content, &stack, counter, file);
		}
		free(l_content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
