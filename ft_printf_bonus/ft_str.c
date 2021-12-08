/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:21:52 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/06 19:42:42 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char	*c)
{
	int		i;
	int		len;

	i = 0;
	if (!c)
	{
		len = ft_putstr("(null)");
		return (len);
	}
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

int	ft_isprint(int c)
{
	if (c != 'c' && c != 's' && c != 'd' && c != 'i'
		&& c != 'x' && c != 'X' && c != '%' && c != 'p' && c != 'u')
	{
		return (1);
	}
	return (0);
}
