#ifndef PUTCHAR_H
#define PUTCHAR_H
int _putchar(char c);
#endif

#ifndef ISLOWER_H
#define ISLOWER_H
int _islower(int c);
#endif

#ifndef ISALPHA_H
#define ISALPHA_H
int _isalpha(int c);
#endif

#ifndef ABS_H
#define ABS_H
int _abs(int n);
#endif

#ifndef ISUPPER_H
#define ISUPPER_H
int _isupper(int c);
#endif

#ifndef ISDIGIT_H
#define ISDIGIT_H
int _isdigit(int c);
#endif

#ifndef STRLEN_H
#define STRLEN_H
int _strlen(char *s);
#endif

#ifndef PUTS_H
#define PUTS_H
void _puts(char *s);
#endif

#ifndef STRCPY_H
#define STRCPY_H

char *_strcpy(char *dest, char *src);
#endif

#ifndef ATOI_H
#define ATOI_H

int _atoi(char *s);
#endif
#ifndef STRCAT_H
#define STRCAT_H

char *_strcat(char *dest, char *src);
#endif

#ifndef STRNCAT_H
#define STRNCAT_H

char *_strncat(char *dest, char *src, int n);
#endif
#ifndef STRNCPY_H
#define STRNCPY_H

char *_strncpy(char *dest, char *src, int n);
#endif

#ifndef STRCMP_H
#define STRCMP_H
int _strcmp(char *s1, char *s2);
#endif

#ifndef MEMSET_H
#define MEMSET_H
char *_memset(char *s, char b, unsigned int n);
#endif

#ifndef MEMCPY_H
#define MEMCPY_H
char *_memcpy(char *dest, char *src, unsigned int n);
#endif

#ifndef STRCHR_H
#define STRCHR_H
char *_strchr(char *s, char c);
#endif

#ifndef STRSPN_H
#define STRSPN_H
unsigned int _strspn(char *s, char *accept);
#endif

#ifndef STRPBRK_H
#define STRPBRK_H
char *_strpbrk(char *s, char *accept);
#endif

#ifndef STRSTR_H
#define STRSTR_H
char *_strstr(char *haystack, char *needle);
#endif
