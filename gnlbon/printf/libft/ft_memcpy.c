/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:58:19 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 12:30:32 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	if (!dest && !src)
		return (0);
	while (n-- > 0)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
	}
	return (dest);
}
// copie n block de memoire dans une autre destination
