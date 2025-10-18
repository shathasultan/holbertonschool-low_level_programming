#include "lists.h"
#include <unistd.h>
#include <stdio.h>  /* Added to support snprintf */
#include <string.h>  /* Added to support strlen */

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
    char buffer[100];  /* Buffer to hold the string for write */

    while (h)
    {
        if (h->str)
        {
            /* Print the length of the string and the string itself */
            snprintf(buffer, sizeof(buffer), "[%u] %s\n", h->len, h->str);
            write(1, buffer, sizeof(buffer));  /* Print directly */
        }
        else
        {
            write(1, "[0] (nil)\n", 11);  /* Print if string is NULL */
        }
        h = h->next;
        count++;
    }

    return (count);
}

