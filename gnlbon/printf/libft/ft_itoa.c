/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:45:28 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 06:56:20 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_abs(int n)

{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_int_len(int n)

{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)

{
	int		len;
	int		i;
	char	*res;

	len = ft_int_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (!n)
		res[0] = '0';
	else if (n < 0)
		res[0] = '-';
	i = len - 1;
	while (n)
	{
		res[i] = ft_abs(n % 10) + '0';
		n /= 10;
		i--;
	}
	return (res);
}
/*
#include <stdio.h>

int main()
{
	int lol = 062;

	printf("%d\n", lol);

	printf("%s", ft_itoa(lol));

}*/
