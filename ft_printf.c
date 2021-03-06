/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:25:37 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/24 11:45:03 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_print_hexa(char hexa, int *count, char *temp)
{
	int	j;

	j = ft_strlen (temp);
	j--;
	while (j >= 0 && hexa == 'x')
		ft_putchar(temp[j--], count);
	while (j >= 0 && hexa == 'X')
	{
		if (temp[j] >= 'a' && temp[j] <= 'z')
			ft_putchar((temp[j--] - 32), count);
		else
			ft_putchar(temp[j--], count);
	}
}

void	ft_handle_hexa(char hexa, unsigned int i, int *count)
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
		temp[j] = '\0';
		ft_print_hexa(hexa, count, temp);
	}
}

static void	handle_format(const char *t, va_list args, int *count)
{
	if (t[1] == 'c')
		ft_putchar (va_arg (args, int), count);
	else if (t[1] == 's')
		ft_putstr (va_arg(args, char *), count);
	else if (t[1] == 'u')
		ft_putnbr(va_arg(args, unsigned int), count);
	else if (t[1] == 'd' || t[1] == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (t[1] == 'x' || t[1] == 'X')
		ft_handle_hexa(t[1], va_arg(args, unsigned int), count);
	else if (t[1] == 'p')
		ft_handle_voidp(va_arg(args, unsigned long int), count);
	else if (t[1] == '%')
		ft_putchar(t[1], count);
}

int	ft_printf(const char *s, ...)
{
	va_list		args;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] != '%')
			ft_putchar (s[i], &count);
		else
		{
			handle_format(&s[i], args, &count);
			i++;
		}
		i++;
	}
	va_end (args);
	return (count);
}
