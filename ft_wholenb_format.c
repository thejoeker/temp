/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wholenb_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <julrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 05:45:46 by julrober          #+#    #+#             */
/*   Updated: 2023/01/10 05:53:05 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_wholenb_format(int number, int *length)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*length) += 11;
		return ;
	}
	if (number < 0)
	{
		ft_putchar_format('-', length);
		ft_wholenb_format(number * -1, length);
	}
	else
	{
		if (number > 9)
			ft_wholenb_format(number / 10, length);
		ft_putchar_format(number % 10 + '0', length);
	}
}
