#include "monty.h"

/**
 * g_mod - computes the rest of the division
 * @stack: pointer to head of the stack
 * @line_number: line number
 * Return: nothing or exit_failure
 */
void g_mod(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    if (temp == NULL || temp->next == NULL)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
        fclose(file);
        get_free(*stack);
        exit(EXIT_FAILURE);
    }

    if (temp->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        fclose(file);
        get_free(*stack);
        exit(EXIT_FAILURE);
    }

    temp->next->n %= temp->n;
    *stack = temp->next;
    free(temp);
}

