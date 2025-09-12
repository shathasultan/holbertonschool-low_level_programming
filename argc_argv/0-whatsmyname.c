
#include <stdio.h>
/**
* main - prints the program name (including path), followed by a new line
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
