#include "lists.h"
#include <stdio.h> /* لأجل printf */

void print_list(const list_t *h)
{
    size_t n = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        n++;
    }
}
