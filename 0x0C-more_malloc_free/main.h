#ifndef MAIN
#define MAIN

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _strlen(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void error(void);
unsigned int _is_not_digit(char *str);
unsigned int length(char *str);
unsigned int _atoi(char ch);
void multiply(unsigned int *ptr, unsigned  int l1, 
char *int1, char *int2, unsigned int *x, unsigned int *y,
unsigned int z);
void addition(unsigned int **pt1, unsigned int k, unsigned int l2);
char _itoa(unsigned int ch);
void _free(unsigned int **pt1, unsigned int i);

#endif /* end MAIN */
