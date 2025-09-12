
#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers and prints the result
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success; 1 if incorrect number of arguments
*/
int main(int argc, char *argv[])
{
int a;
int b;
int res;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
res = a *b;
printf("%d\n", res);
return (0);
}
