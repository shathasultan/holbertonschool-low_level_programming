
#include <stdio.h>
#include <stdlib.h>
/**
* is_number - checks if a string contains only digits
* @s: pointer to the string
*
* Return: 1 if @s has only digits and is not empty, otherwise 0
*/
int is_number(char *s)
{
int i = 0;
if (s[0] == '\0')
return (0);
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
/**
* main - adds positive numbers and prints the result
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 1 if a non-digit argument is found
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
