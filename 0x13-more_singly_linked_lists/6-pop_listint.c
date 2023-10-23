#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Head node's data.
 */
int pop_listint(listint_t **head)
{
    int headNodeData;
    listint_t *current;
    listint_t *nextNode;

    if (*head == NULL)
        return (0);

    current = *head;
    headNodeData = current->n;
    nextNode = current->next;

    free(current);

    *head = nextNode;

    return headNodeData;
}
