#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t linked list.
 * @list: Pointer to the head of the linked list.
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        if (current->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%lu] %s\n", current->len, current->str);

        current = current->next;
        count++;
    }

    return count;
}
