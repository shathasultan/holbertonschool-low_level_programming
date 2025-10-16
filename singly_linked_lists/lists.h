#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }
    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

void print_list(const list_t *h)
{
    while (h != NULL)
    {
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
    }
}
