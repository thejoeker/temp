/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsint_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <julrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 05:45:42 by julrober          #+#    #+#             */
/*   Updated: 2023/01/10 05:49:22 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsint_format(unsigned int u, int *length)
{
	if (u >= 10)
		ft_unsint_format(u / 10, length);
	ft_putchar_format(u % 10 + '0', length);
}
