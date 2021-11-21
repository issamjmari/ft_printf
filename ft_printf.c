 #include "ft_printf.h"
 #include <stdarg.h>
static void	handle_format(const char *t, va_list args)
{
	char	c;
	char	*s;
	int		d;
	if (t[1] == 'c')
	{
		c = va_arg (args, int);
		write (1, &c, 1);
	}
	else if (t[1] == 's')
	{
		s = va_arg(args, char *);
		ft_putstr (s);
	}
	else if (t[1] == 'd')
	{
		d = va_arg(args, int);
		ft_putnbr(d);
	}
}
int ft_printf(const char *s, ...)
{
	va_list    args;
	int        i;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] != '%')
			write (1, &s[i], 1);
		else
		{
			handle_format(&s[i], args);
			i++;
		}
		i++;
	}
	return (i);
}