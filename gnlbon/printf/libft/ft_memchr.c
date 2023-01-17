/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:02:23 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 12:56:05 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*ptr_s == (unsigned char)c)
			return ((void *)ptr_s);
		ptr_s++;
	}
	return (0);
}
// recherche et retourne un pointer sur la 1ere occurence
// retourne NULL si rien n'est trouve
