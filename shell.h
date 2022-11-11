#ifndef SHELL_H
#define SHELL_H
#define _GNU_SOURCE

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif /*SHELL_H*/
