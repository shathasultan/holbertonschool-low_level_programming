#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Define the structure for the list */
typedef struct list_s
{
    char *str;           /* String data */
    unsigned int len;    /* Length of the string */
    struct list_s *next; /* Pointer to the next node */
} list_t;

/* Function prototypes */
list_t *add_node(list_t **head, const char *str);
void print_list(const list_t *h);

#endif /* LISTS_H */
