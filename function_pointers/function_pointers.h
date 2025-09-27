#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* prototype of print_name function */
void print_name(char *name, void (*f)(char *));

/* prototypes of the helper functions */
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

#endif /* FUNCTION_POINTERS_H */
