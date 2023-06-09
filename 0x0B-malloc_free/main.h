#ifndef CREATE_ARRAY_H
#define CREATE_ARRAY_H
char *create_array(unsigned int size, char c);
#endif

#ifndef _STRDUP_H
#define _STRDUP_H
char *_strdup(char *str);
#endif

#ifndef STR_CONCAT_H
#define STR_CONCAT_H
char *str_concat(char *s1, char *s2);
#endif

#ifndef ALLOC_GRID_H
#define ALLOC_GRID_H
int **alloc_grid(int width, int height);
#endif

#ifndef FREE_GRID_H
#define FREE_GRID_H
int free_grid(int **grid, int height);
#endif

#ifndef ARGSTOSTR_H
#define ARGSTOSTR_H
char *argstostr(int ac, char **av);
#endif

#ifndef STRTOW_H
#define STRTOW_H
char **strtow(char *str);
#endif
