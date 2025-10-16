#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;
    list_t *new1, *new2;
    size_t n;

    new1 = malloc(sizeof(list_t));
    if (new1 == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new1->str = strdup("Hello");
    new1->len = 5;
    new1->next = head;
    head = new1;

    new2 = malloc(sizeof(list_t));
    if (new2 == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new2->str = strdup("World");
    new2->len = 5;
    new2->next = head;
    head = new2;

    n = list_len(head);
    printf("-> %lu elements\n", n);

    free(new1->str);
    free(new1);
    free(new2->str);
    free(new2);

    return (0);
}
