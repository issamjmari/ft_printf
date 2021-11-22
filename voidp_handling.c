#include "ft_printf.h"

void	ft_print_voidp(unsigned long long i, int *count, char *temp)
{
	int					j;

	j = ft_strlen (temp);
	j--;
	if (j >= 0)
    {
        ft_putchar ('0', count);
        ft_putchar('x', count);
        while (j >= 0)
		    ft_putchar(temp[j--], count);
    }
}
void	ft_handle_voidp(unsigned long long i, int *count)
{
	int					j;
	char				*hex;
	char				temp[16];

	j = 0;
	hex = "0123456789abcdef";
	if (i == 0)
	{
		temp[0] = hex[0];
		ft_putchar(temp[0], count);
	}
	else
	{
		while (i)
		{
			temp[j++] = hex[i % 16];
			i /= 16;
		}
		ft_print_voidp(i, count, temp);
	}
}