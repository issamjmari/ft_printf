#include "ft_printf.h"

size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    handle_the_nb(int temp, int size, int last)
{
        if (temp < 0)
        {
                last *= -1;
                ft_putchar('-');
        }
        temp = last;
        while (temp / 10 > 0)
        {
                size *= 10;
                temp /= 10;
        }
        ft_putchar((last / size) + '0');
        size /= 10;
        while (size >= 1)
        {
                ft_putchar(((last / size) % 10) + '0');
                size /= 10;
        }
}

void    ft_putnbr(int   nb)
{
        int     size;
        int     temp;
        int     last;

        size = 1;
        if (nb == -2147483648)
        {
                ft_putchar('-');
                ft_putchar('2');
                nb = 147483648;
        }
        temp = nb;
        last = nb;
        handle_the_nb(temp, size, last);
}
void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
}
