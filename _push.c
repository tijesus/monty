#include "monty.h"
/**
 * _push - push to the top of the stack
 * @head: pointer to head pointer
 * @n: number passed
 * Return: 0 on success
*/
void _push(stack_t **head, unsigned int counter)
{
    int j = 0, flag = 0;

    if (monty.arg)
    {
        if (monty.arg[0] == '-')
            j++;
        for (; monty.arg[j] != '\0'; j++)
        {
            if (monty.arg[j] > 57 || monty.arg[j] < 48)
                flag = 1; 
        }
        if (flag == 1)
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            fclose(monty.file_pointer);
            free(monty.current_line);
            _free(*head);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(monty.file_pointer);
        free(monty.current_line);
        _free(*head);
        exit(EXIT_FAILURE);
    }
    /*n = atoi(monty.arg);*/
/*
*    if (monty.stack_mode == 0)
*       addnode(head, n);
*   else
*        addqueue(head, n);
*/
}
