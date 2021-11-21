#include "ft_printf.h"

size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}

void    ft_putchar(char c, int *count)
{
        write(1, &c, 1);
        (*count)++;
}

int    handle_the_nb(int temp, int size, int last, int *count)
{
        int i;

        i = 0;
        if (temp < 0)
        {
                last *= -1;
                ft_putchar('-', count);
        }
        temp = last;
        while (temp / 10 > 0)
        {
                size *= 10;
                temp /= 10;
                i += 2;
        }
        ft_putchar((last / size) + '0', count);
        size /= 10;
        while (size >= 1)
        {
                ft_putchar(((last / size) % 10) + '0', count);
                size /= 10;
        }
        return (i);
}

int    ft_putnbr(int nb, int *count)
{
        int     size;
        int     temp;
        int     last;

        size = 1;
        if (nb == -2147483648)
        {
                ft_putchar('-', count);
                ft_putchar('2', count);
                nb = 147483648;
        }
        temp = nb;
        last = nb;
        return (handle_the_nb(temp, size, last, count));
}
void    ft_putstr(char *str, int *count)
{
        int     i;

        i = 0;
        while (str[i])
        {
                ft_putchar(str[i], count);
                i++;
        }
}
