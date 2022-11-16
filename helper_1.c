#include "shell.c"

/**
 * remove_newline - removes new line from string
 * @str: string to be used
 * Return: void
 */
void remove_newline(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] == '\n')
break;
i++;
}
str[i] = '\0';
}

/**
 * _strcpy - copies a string to another buffer
 * @source: source to copy from
 * @dest: destination to copy to
 * Return: void
 */
void _strcpy(char *source, char *dest)
{
int i = 0;
for (; source[i] != '\0'; i++)
dest[i] = source[i];
dest[i] = '\0';
}

/**
 * _strlen - counts string length
 * @string: string to be counted
 * Return: length of the string
 */
int _strlen(char *string)
{
int len = 0;
if (string == NULL)
return (len);
for (; string[len] != '\0'; len++)
{}
return (len);
}
