#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
list_t *head = NULL;  /* رأس القائمة */
list_t *new1, *new2;  /* تعريف عقدتين */
size_t n;
/* اختبار حالة القائمة الفارغة */
n = list_len(head);
printf("-> %lu elements (expected 0)\n", n);
/* إضافة عنصر */
new1 = malloc(sizeof(list_t));
new1->str = strdup("Hello");
new1->len = 5;
new1->next = head;
head = new1;
/* اختبار حالة قائمة تحتوي على عنصر واحد */
n = list_len(head);
printf("-> %lu elements (expected 1)\n", n);
/* إضافة عنصر آخر */
new2 = malloc(sizeof(list_t));
new2->str = strdup("World");
new2->len = 5;
new2->next = head;
head = new2;
/* اختبار حالة قائمة تحتوي على عنصرين */
n = list_len(head);
printf("-> %lu elements (expected 2)\n", n);
/* تحرير الذاكرة */
free(new1->str);
free(new2->str);
free(new1);
free(new2);
return 0;
}
