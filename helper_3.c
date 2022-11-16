#include "shell.h"

/**
 * _strtok_r - tokenizes a string
 * @string: string to be used to tokenize the string
 * @delim: delimiter to be used to tokenize the string
 * @save_ptr: pointer to be used to keep track of the next token
 * Return: the next available token
 */
char *_strtok_r(char *string, char *delim, char **save_ptr)
{
char *finish;
if (string == NULL)
string = *save_ptr;
if (*string == '\0')
{
*save_ptr = string;
return (NULL);
}
string += _strspn(string, delim);
if (*string == '\0')
{
*save_ptr = string;
return (NULL);
}
finish = string + _strspn(string, delim);
if (*finish == '\0')
{
*save-ptr = finish;
return (string);
}
*finish = '\0';
*save_ptr = finish + 1;
return (string);
}
