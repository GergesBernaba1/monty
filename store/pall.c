#include "monty.h"

/**
 * get_pall - prints all the values on the stack
 * @stack: pointer to head of the stack
 * @line_number: line number
 * Return: nothing
 */
void g_pall(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    (void)line_number;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}

