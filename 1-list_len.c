#include "lists.h"
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
if (h == NULL)
return 0;
while (current != NULL)
{
count++;
current = current->next;
}
return count;
}
