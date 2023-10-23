#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: No return.
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while ((current = head) != NULL)
    {
        head = head->next;
        free(current);
    }
}
