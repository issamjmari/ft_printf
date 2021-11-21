#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>

int     ft_printf(const char *, ...);
size_t  ft_strlen(const char *);
int    ft_putnbr(int nb);
void    ft_putstr(char *s);
#endif
