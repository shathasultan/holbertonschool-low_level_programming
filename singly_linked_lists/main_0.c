#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    list_t *head;
    list_t *new;
    size_t n;

    head = NULL;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = "Hello";
    new->len = 5;
    new->next = head;
    head = new;

    n = list_len(head);
    printf("-> %lu elements\n", n);

    free(new);

    return 0;
}
