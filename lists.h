#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototype for list_len */
size_t list_len(const list_t *h);

#endif /* LISTS_H */
