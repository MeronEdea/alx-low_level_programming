#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: Address of the new element. NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *newNode;

    newNode = malloc(sizeof(listint_t));

    if (newNode == NULL)
        return (NULL);

    newNode->n = n;
    newNode->next = *head;
    *head = newNode;

    return (*head);
}
