
#include "variadic_functions.h"
int main(void)
{
print_strings(", ", 2, "Jay", "Django");
print_strings(" - ", 4, "One", NULL, "Three", "Four");
print_strings(NULL, 3, "A", "B", "C");
return (0);
}
