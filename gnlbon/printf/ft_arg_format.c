#include ft_printf.h

int ft_arg_format(int c)
{
	return(c == 'c' || c == 's' || c == 'p' ||
			c == 'p' || c == 'd' || c ==
			'i' || c == 'u' || c == 'x' ||
			c == 'X' || c == '%')
}
