/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:59:19 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 12:39:20 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		idx;

	if (dest == src || !n)
		return (dest);
	idx = 0;
	if (dest < src)
	{
		while (idx < n)
		{
			*((char *)dest + idx) = *((char *)src + idx);
			idx++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dest + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}
// copie n block de memoire dans une autre destination
