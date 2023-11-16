#include "monty.h"
/**
 * f_mod - finds modulus of top two elements
 * @stack: pointer to the top of the stack
 * @line_number: line number
 * Return: nothing or exit_failure
 */
void _mod(stack_t **stack, unsigned int line_number)
{
        stack_t *fir, *sec;

        if ((*stack == NULL) || ((*stack)->next == NULL))
        {
                fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
                fclose(file);
                get_free(*stack);
                exit(EXIT_FAILURE);
        }
        else if ((*stack)->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", line_number);
                fclose(file);
                get_free(*stack);
                exit(EXIT_FAILURE);
        }
        else
        {
                fir = *stack;
                sec = fir->next;
                sec->n %= fir->n;
                *stack = sec;
                (*stack)->prev = NULL;
                free(fir);
        }
}
