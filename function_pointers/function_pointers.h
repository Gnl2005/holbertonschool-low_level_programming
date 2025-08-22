#include <stddef.h>
#ifndef FUCTION_POINTERS_H
#define FUCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
