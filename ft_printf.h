/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:54:59 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/22 19:55:43 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
size_t	ft_strlen(const char *s);
void	ft_putchar(char c, int *count);
int		ft_putnbr(long long nb, int *count);
void	*ft_putstr(char *s, int *count);
void	ft_print_voidp(int *count, char *temp);
void	ft_print_hexa(char hexa, int *count, char *temp);
void	ft_handle_voidp(unsigned long int i, int *count);
void	ft_handle_hexa(char hexa, unsigned int i, int *count);
#endif
