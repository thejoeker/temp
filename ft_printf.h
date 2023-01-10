/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <julrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 06:52:34 by julrober          #+#    #+#             */
/*   Updated: 2023/01/10 06:52:37 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

void	ft_putchar_format(char c, int *length);
void	ft_string_format(char *s, int *length);
void	ft_hexalow_format(unsigned int x, int *length, char z);
void	ft_hexaup_format(unsigned int x, int *length, char z);
void	ft_wholenb_format(int nb, int *length);
void	ft_ptrhexa_format(size_t ptr, int *length);
void	ft_unsint_format(unsigned int u, int *length);
int		ft_printf(const char *format, ...);

#endif
