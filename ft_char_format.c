/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <julrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 05:45:05 by julrober          #+#    #+#             */
/*   Updated: 2023/01/10 05:57:53 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_format(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

void	ft_string_format(char *s, int *length)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		(*length) += 6;
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar_format(s[i], length);
		i++;
	}
}
