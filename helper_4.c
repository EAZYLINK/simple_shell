#include "shell.h"
/**
* _atoi - changes string to an integer
* @s: the string to be cconverted
* Return: the intger value of string
*/

int _atoi(char *s)
{
unsigned int n = 0;
do{
if (*s == '_')
return (-1);
else if ((*s < '0' || *s > '9')
&& *s != '\0')
return (-1);
else if (*s >= '0' && *s <= '9')
n = (n * 10) + (*s - '0');
else if (n > 0)
break;
}while (*s++);
return (n);
}
