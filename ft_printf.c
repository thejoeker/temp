/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <julrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 05:45:29 by julrober          #+#    #+#             */
/*   Updated: 2023/01/10 05:49:09 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_checker(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_string_format(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_wholenb_format(va_arg(*args, int), len);
	else if (s == 'u')
		ft_unsint_format(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hexalow_format(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexaup_format(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_ptrhexa_format(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_format(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_format('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_printf_checker(format[i], &args, &length, &i);
			i++;
		}
		else
		{
			ft_putchar_format((char)format[i], &length);
			i++;
		}
	}
	va_end(args);
	return (length);
}
