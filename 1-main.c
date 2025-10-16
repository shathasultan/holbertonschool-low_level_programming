#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* main - Check the code for the function list_len
*
* Return: Always 0.
*/
int main(void)
{
list_t *head;
head = NULL;
add_node(&head, "Hello");
add_node(&head, "World");
add_node(&head, "List");
printf("The length of the list is: %lu\n", list_len(head));
return (0);
}
