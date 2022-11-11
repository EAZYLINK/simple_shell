#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>	
#include <sys/wait.h>	
#include <sys/stat.h>	
#include <unistd.h>	
#include <errno.h>	
#include <dirent.h>	
#include <signal.h>	

/*constants*/	
#define EXTERNAL_COMMAND 1	
#define INTERNAL_COMMAND 2	
#define PATH_COMMAND 3	
#define INVALID_COMMAND -1	

#define min(x, y) (((x) < (y)) ? (x) : (y))	

/**	
 * struct map - a struct that maps a command name to a function	
 * @command_name: name of command	
 * @func: the function that executes the command	
 */	

typedef struct map	
{	
char *command_name;	
void (*func)(char **command);	
} function_map;	

extern char **environ;	
extern char *line;	
extern char **commands;	
extern char *shell_name;	
extern int status;	

/*helpers1*/	
void print(char *, int);	
char **tokenizer(char *, char *);	
void remove_newline(char *);	
int _strlen(char *);	
void _strcpy(char *, char *);	

/*helpers2*/	
int _strcmp(char *, char *);	
char *_strcat(char *, char*);	
int _strspn(char *, char *);	
int _strcspn(char *, char *);	
char *_strchr(char *, char);	

/*helpers3*/	
char *_strtok_r(char *, char *, char **);	
int _atoi(char *);	
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);	
void ctrl_c_handler(int);	
void remove_comment(char *);	


ssize_t getline(char **lineptr, size_t *n, FILE *stream);
