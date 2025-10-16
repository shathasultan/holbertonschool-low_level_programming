#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  /* for size_t and NULL */
#include <stdlib.h>  /* for malloc and free */

/* تعريف الهيكل list_t */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* تعريف دالة list_len */
size_t list_len(const list_t *h);

#endif /* LISTS_H */

