#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
    size_t nodeCount = 0;

    while (h != NULL)
    {
        h = h->next;
        nodeCount++;
    }
    return nodeCount;
}
