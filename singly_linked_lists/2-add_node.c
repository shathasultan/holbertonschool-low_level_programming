#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added as the new node's data.
 * 
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);  /* Return NULL if memory allocation fails */

    /* Duplicate the string and assign it to the new node */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);  /* Free the allocated memory for the node */
        return (NULL);  /* Return NULL if string duplication fails */
    }

    new_node->len = strlen(str);  /* Set the length of the string */
    new_node->next = *head;  /* Make the next of the new node point to the current head */

    *head = new_node;  /* Update the head to point to the new node */

    return (new_node);  /* Return the address of the new node */
}
