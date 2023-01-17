/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:02:45 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 12:58:09 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s1 + idx)
			== *((unsigned char *)s2 + idx))
			idx++;
		else
			return ((*((unsigned char *)s1 + idx))
				- *((unsigned char *)s2 + idx));
	}
	return (0);
}
//compare 2 string sur n caractere. si egale = 0,
//si s1 > s2 = positif et s1 < s2 = negatif.
