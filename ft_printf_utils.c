/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:27:45 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/22 17:48:08 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

int	handle_the_nb(long long temp, int size, long last, int *count)
{
	int	i;

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

int	ft_putnbr(long long nb, int *count)
{
	long long	size;
	long long	temp;
	long long	last;

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

void	*ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", count);
		return (NULL);
	}
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
	return (NULL);
}
