/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:53:52 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 11:28:04 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*s;

	s = ptr;
	while (len-- > 0)
	{
		*s = c;
		s++;
	}
	return (ptr);
}
//rempli n bytes d'une valeur x d'un pointeur. 
