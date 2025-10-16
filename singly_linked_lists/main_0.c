k#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;
    list_t *ptr;
    char *strings[] = {"Alexandro", "Asaia", "Augustin", "Bennett", "Bilal"};

    for (int i = 0; i < 5; i++)
    {
        ptr = add_node(&head, strings[i]);
        if (ptr == NULL)
        {
            printf("Error\n");
            return (1);
        }
    }

    print_list(head);
    return (0);
}

