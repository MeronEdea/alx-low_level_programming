#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
    size_t nodeCount = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        nodeCount++;
    }
    return nodeCount;
}
