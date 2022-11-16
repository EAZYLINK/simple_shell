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
