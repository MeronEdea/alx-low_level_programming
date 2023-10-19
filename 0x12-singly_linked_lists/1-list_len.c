#include "lists.h"

/**
 * list_len - Returns the number of elements in a list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        current = current->next;
        count++;
    }

    return count;
}
