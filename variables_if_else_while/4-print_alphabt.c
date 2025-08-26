#include <stdio.h>
/**
* main - prints the alphabet in lowercase except 'q' and 'e'
* Return: 0 on success
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
putchar('\n');
return (0);
}
