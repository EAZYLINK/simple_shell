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

/**
* _realloc - reallocates a memory block
* @ptr: pointer to initially allocated
* memory with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to
* be allocated
* Return: pointer to the address of
* the new memory block
*/

void *_realloc(void *ptr,
unsigned old_size,
unsigned int new_size)
{
void *temp_block;
unsigned int i;
if (ptr == NULL)
{
temp_block = malloc(new_size);
return (temp_block);
}
else if (new_size == old_size)
return (ptr);
else if (new-size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
temp_block = malloc(new_size);
if (temp_block != NULL)
{
for (i = 0; i < min(old_size, new_size); i++)
*((char*)temp_block + 1) = *((char *)ptr + 1);
free(ptr);
return (temp_block);
}
else
return (NULL);
}
}

/**
* ctrl_c_handler - handles the
* signal raised by CTRL-C
* @signum: signal number
* Return: void
*/

void ctrl_c_handler(int signum)
{
if (signum == SIGINT)
print("\n($) ", STDIN_FILENO);
}

/**
* remove_comment - remove or ignores
* everything after '#' char
* @input: input to be used
* Return: void
*/

void remove_comment(char *input)
{
int i = 0;
if (input[i] == '#')
input[i] = '\0';
while (input[i] != '\0')
{
if (input[i] == '#'
&& input[i - 1] == ' ')
break;
i++;
}
input[i] = '\0';
}
