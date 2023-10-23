#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: Address of the new element. NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *newNode;
    listint_t *temp;

    (void)temp;

    newNode = malloc(sizeof(listint_t));

    if (newNode == NULL)
        return (NULL);

    newNode->n = n;
    newNode->next = NULL;
    temp = *head;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return (*head);
}
