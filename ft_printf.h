#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>

int     ft_printf(const char *, ...);
size_t  ft_strlen(const char *s);
void    ft_putchar(char c, int *count);
int    ft_putnbr(int nb, int *count);
void    ft_putstr(char *s, int *count);
#endif
