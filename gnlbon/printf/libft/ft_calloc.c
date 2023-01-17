/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:16:46 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 13:20:13 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc (count * size);
	if (!result)
		return (0);
	ft_bzero(result, count * size);
	return (result);
}
// aloue de la memoire et l'initialise a 0
