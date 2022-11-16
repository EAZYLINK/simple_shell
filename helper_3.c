#include "shell.h"

/**
 * strtok_r - tokenizes a string
 * @string: string to be used to tokenize the string
 * @delim: delimiter to be used to tokenize the string
 * @save_ptr: pointer to be used to keep track of the next token
 * Return: the next available token
 */
char *strtok_r(char *string, char *delim, char **save_ptr)
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
if (*finish == '\0)
{
*save-ptr = finish;
return (string);
}
*finish = '\0';
*save_ptr = finish + 1;
return (string);
}

/**
* _atoi - changes string to an integer
* @s: the string to be cconverted
* Return: the intger value of string
*/

int _atoi(char *s)
{
unsigned int n = 0;
do
{
if (*s == '_')
return (-1);
else if ((*s < '0' || *s > '9')
&& *s != '\0')
return (-1);
else if (*s >= '0' && *s <= '9')
n = (n * 10) + (*s - '0');
else if (n > 0)
break;
}
while (*s++);
return (n);
}
