#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
int     ft_printf(const char *, ...);
size_t  ft_strlen(const char *s);
void    ft_putchar(char c, int *count);
int    ft_putnbr(long long nb, int *count);
void    ft_putstr(char *s, int *count);
#endif
