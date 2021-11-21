 #include "ft_printf.h"
 #include <stdarg.h>

static void	handle_format(const char *t, va_list args, int *count)
{
	if (t[1] == 'c')
		ft_putchar (va_arg (args, int), count);
	else if (t[1] == 's')
		ft_putstr (va_arg(args, char *), count);
	else if (t[1] == 'u')
		ft_putchar((unsigned int) va_arg(args, int), count);
	else if (t[1] == 'd' || t[1] == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (t[1] == '%')
		ft_putchar(t[1], count);
	
}
int ft_printf(const char *s, ...)
{
	va_list    	args;
	int        	i;
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